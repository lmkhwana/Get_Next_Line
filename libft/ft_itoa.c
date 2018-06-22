/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 16:55:19 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/06/22 13:39:16 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static size_t	ft_len(int n)
{
	size_t i;

	i = 1;
	while (n /= 10)
	{
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	num;

	len = ft_len(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		len++;
	}
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	str[--len] = num % 10 + '0';
	while (num /= 10)
	{
		str[--len] = num % 10 + '0';
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
