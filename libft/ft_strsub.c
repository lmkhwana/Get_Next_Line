/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 16:02:13 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/06/22 13:53:19 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*freshstring;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	freshstring = ft_strnew(len);
	if (freshstring == NULL)
		return (NULL);
	while (i < len)
	{
		freshstring[i] = s[start + i];
		i++;
	}
	freshstring[i] = '\0';
	return (freshstring);
}
