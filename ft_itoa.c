/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:39:55 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/17 23:47:02 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static	size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	(n < 0) ? len++ : len;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	const size_t	neg = (n < 0) ? 1 : 0;
	const size_t	int_len = ft_intlen(n);
	size_t			i;
	char			r;
	char			*num;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (!(num = ft_calloc(int_len + 1, sizeof(char))))
		return (NULL);
	n = ft_abs(n);
	i = 0;
	while (i < int_len)
	{
		r = n % 10;
		n = n / 10;
		num[i] = r + '0';
		i++;
	}
	if (neg)
		num[i - 1] = '-';
	return (ft_strrev(num));
}
