/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:28:35 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/06/22 13:47:52 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t				i;
	unsigned const char *ss1;
	unsigned const char *ss2;

	i = 0;
	ss1 = (unsigned const char *)s1;
	ss2 = (unsigned const char *)s2;
	while (ss1[i] == ss2[i] && ss1[i] != '\0' && ss2[i] != '\0')
	{
		i++;
	}
	return (ss1[i] - ss2[i]);
}
