/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 17:19:14 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/02 19:34:54 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove (void *dst, const void *src, size_t len)
{
	if ((size_t) (dst - src) >= len)
		return (ft_memcpy(dst, src, len));
	while (len--)
		*((unsigned char *) dst + len) = *((unsigned char *) src + len);
	return (dst);
}
