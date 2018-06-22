/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:33:18 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/06/22 13:40:28 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned char *p;

	p = (unsigned char *)s;
	while (len--)
	{
		if (*p != (unsigned char)c)
			p++;
		else
			return (p);
	}
	return (0);
}
