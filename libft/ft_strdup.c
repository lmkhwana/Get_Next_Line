/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:04:59 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/06/22 13:48:35 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*newstr;
	size_t	len;

	len = ft_strlen(s1) + 1;
	newstr = (char *)malloc(sizeof(char) * len);
	if (newstr == NULL)
		return (NULL);
	ft_strcpy(newstr, s1);
	return (newstr);
}
