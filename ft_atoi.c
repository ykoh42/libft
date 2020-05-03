/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:57:19 by ykoh              #+#    #+#             */
/*   Updated: 2020/05/05 00:58:23 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char				neg;
	unsigned long long	num;

	while (ft_isspace(*str))
		str++;
	neg = (*str == '-');
	if (*str == '+' || *str == '-')
		str++;
	num = 0;
	while (ft_isdigit(*str))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (num > LONG_MAX - 1 && neg == 1)
		return (0);
	if (num > LONG_MAX && neg == 0)
		return (-1);
	return (neg ? -num : num);
}
