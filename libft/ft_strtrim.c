/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 16:31:24 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/06/22 13:54:50 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (s == NULL)
		return (NULL);
	end = ft_strlen(s);
	start = 0;
	while (ft_iswhitespace(s[start]))
		start++;
	while (ft_iswhitespace(s[end - 1]))
		end--;
	if (end < start)
		end = start;
	str = ft_strnew(end - start);
	if (str == NULL)
		return (NULL);
	return (ft_strncpy(str, s + start, end - start));
}
