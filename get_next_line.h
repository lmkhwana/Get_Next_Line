/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:20:08 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/06/22 13:59:25 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include "libft/includes/libft.h"
# include <fcntl.h>
# define CHECK_IF(c) if (!(c)) return (-1);
# define IF_CHECK(c) if (!(c)) return (NULL);
# define BUFF_SIZE 1000

typedef struct		s_block
{
	char			*temp;
	char			*str;
	int				bytes;
	int				fd;
	struct s_block	*next;
}					t_block;

int					get_next_line(const int fd, char **line);

#endif
