/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:09:01 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/02 18:26:17 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
/*
	void	*p;

	if ((p = ft_memchr(src, c, n)))
		return (ft_memcpy(dst, src, p - src + 1) + (p - src + 1));
	ft_memcpy(dst, src, n);
	return (NULL);

*/
	const void	*p = ft_memchr(src, c, n);

	if (p != NULL)
	{
		n = p - src + 1;
		return (ft_memcpy(dst, src, n) + n);
	}
	ft_memcpy(dst, src, n);
	return (NULL);

}
