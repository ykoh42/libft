/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:52:42 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/02 19:36:39 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy (void *restrict dst, const void *restrict src, size_t n)
{
	void	*dstp;

	dstp = dst;
	while (n--)
		*((unsigned char *) dst++) = *((unsigned char *) src++);
	return (dstp);
}
