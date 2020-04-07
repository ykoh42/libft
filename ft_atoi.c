/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:57:19 by ykoh              #+#    #+#             */
/*   Updated: 2020/03/06 15:02:37 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi (const char *str)
{
	char	neg;
	int	num;

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
	return (neg ? -num : num);
}
