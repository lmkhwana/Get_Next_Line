/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:00:05 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/06/22 13:52:13 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t c)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	if (n[i] == '\0')
		return ((char *)h);
	len = ft_strlen(n);
	while (h[i] != '\0' && c >= len)
	{
		j = 0;
		if (h[i] == n[j] && (ft_strncmp(h + i, n, len) == 0))
			return ((char *)h + i);
		i++;
		c--;
	}
	return (NULL);
}
