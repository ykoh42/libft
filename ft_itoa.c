/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 18:39:55 by ykoh              #+#    #+#             */
/*   Updated: 2020/05/05 00:58:34 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_numlen(int n)
{
	size_t	len;

	len = (n <= 0) ? 1 : 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char			*num;
	char			rem;
	size_t			i;
	const char		neg = (n < 0) ? 1 : 0;
	const size_t	num_len = ft_numlen(n);

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (!(num = ft_calloc(num_len + 1, sizeof(char))))
		return (NULL);
	n = ft_abs(n);
	i = 0;
	while (i < num_len)
	{
		rem = n % 10;
		n = n / 10;
		num[i] = rem + '0';
		i++;
	}
	if (neg)
		num[i - 1] = '-';
	return (ft_strrev(num));
}
