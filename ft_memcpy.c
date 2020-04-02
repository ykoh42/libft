/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:52:42 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/01 22:36:50 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy (void *restrict dst, const void *restrict src, size_t n)
{
/*
	void	*dstp;

	dstp = dst;
	while (n--)
		*((unsigned char *) dst++) = *((unsigned char *) src++);
	return (dstp);
*/
// 아래 방법으로 하니가 memmove망가짐:ㅈㅂ
	while (n--)
		*((unsigned char *) dst + n) = *((unsigned char *) src + n);
	return (dst);
		
}
