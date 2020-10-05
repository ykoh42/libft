/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:09:01 by ykoh              #+#    #+#             */
/*   Updated: 2020/10/05 23:47:52 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c,
					size_t n)
{
	const void	*p = ft_memchr(src, c, n);

	if (p != NULL)
	{
		n = p - src + 1;
		return (ft_memcpy(dst, src, n) + n);
	}
	ft_memcpy(dst, src, n);
	return (NULL);
}
