/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:05:39 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/06/22 13:52:50 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	position;
	char	**new_str;

	i = 0;
	start = 0;
	position = 0;
	if (!s || !c)
		return (NULL);
	if (!(new_str = (char **)malloc(sizeof(*new_str) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i] && i < ft_strlen(s) + 1)
			i++;
		if (i > start)
			new_str[position++] = ft_strsub(s, start, (i - start));
	}
	new_str[position] = NULL;
	return (new_str);
}
