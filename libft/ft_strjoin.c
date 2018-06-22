/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 16:16:00 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/06/22 13:49:37 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*freshstring;
	size_t	i;
	size_t	j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	freshstring = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (freshstring == NULL)
		return (NULL);
	while (s1[i])
	{
		freshstring[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		freshstring[i] = s2[j];
		i++;
		j++;
	}
	freshstring[i] = '\0';
	return (freshstring);
}
