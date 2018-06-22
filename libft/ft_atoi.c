/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmkhwana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:27:17 by lmkhwana          #+#    #+#             */
/*   Updated: 2018/06/22 13:39:31 by lmkhwana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		max;

	i = 0;
	max = 2147483647;
	while (ft_iswhitespace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	else
		sign = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		i = (i * 10) + (*str++ - '0');
	}
	if (i > max || i < (-1 * (max + 1)))
		return (0);
	return (i * sign);
}
