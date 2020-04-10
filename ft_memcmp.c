/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 20:51:59 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/11 00:02:26 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int res;

	while (n--)
	{
		if ((res = *((unsigned char *)s1++) - *((unsigned char *)s2++)))
			return (res);
	}
	return (0);
}
