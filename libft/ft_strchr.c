/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:43:25 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/06/22 13:47:21 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		*str;
	size_t		len;

	str = (char *)s;
	i = 0;
	len = ft_strlen(str) + 1;
	while (i < len)
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
