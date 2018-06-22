/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:19:32 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/06/19 17:30:01 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int			final_read(t_block **iter, char **line)
{
	int			i;

	i = 0;
	while ((*iter)->str[i] && (*iter)->str[i] != '\n')
		i++;
	if ((*iter)->str[i] == '\n')
	{
		CHECK_IF(*line = ft_strsub((*iter)->str, 0, i));
		CHECK_IF((*iter)->temp = ft_strdup((*iter)->str + i + 1));
		free((*iter)->str);
		(*iter)->str = (*iter)->temp;
		(*iter)->temp = NULL;
	}
	else if (!(*iter)->str[i])
	{
		if (i == 0)
			return (0);
		CHECK_IF(*line = ft_strdup((*iter)->str));
		free((*iter)->str);
		(*iter)->str = NULL;
	}
	return (1);
}

static t_block		*block_initial(t_block **start, const int fd)
{
	t_block			*temp;

	temp = *start;
	while (temp && temp->fd != fd)
		temp = temp->next;
	if (!temp)
	{
		IF_CHECK(temp = (t_block *)ft_memalloc(sizeof(t_block)));
		temp->fd = fd;
		IF_CHECK(temp->str = ft_strnew(0));
		temp->next = (t_block *)*start;
		*start = temp;
	}
	return (temp);
}

int					get_next_line(const int fd, char **line)
{
	static t_block	*start;
	t_block			*iter;
	char			buffer[BUFF_SIZE + 1];
	int				bytes;

	CHECK_IF(fd >= 0 || line);
	iter = block_initial(&start, fd);
	while ((bytes = read(iter->fd, &buffer, BUFF_SIZE)) > 0)
	{
		buffer[bytes] = '\0';
		CHECK_IF(iter->temp = ft_strjoin(iter->str, buffer));
		free(iter->str);
		CHECK_IF(iter->str = ft_strdup(iter->temp));
		free(iter->temp);
		iter->temp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	CHECK_IF(bytes >= 0);
	if (!bytes && !iter->str)
	{
		iter->fd = 0;
		return (0);
	}
	return (final_read(&iter, line));
}
