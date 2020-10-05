/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:52:42 by ykoh              #+#    #+#             */
/*   Updated: 2020/10/05 23:46:09 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const void	*dstp = dst;

	if (!dst && !src)
		return (NULL);
	while (n--)
		*((unsigned char *)dstp++) = *((unsigned char *)src++);
	return (dst);
}
