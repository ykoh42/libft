/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:33:54 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/01 19:23:20 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
/*
	void	*p;

	p = b;
	while (len--)
		 *((unsigned char *) b++) = (unsigned char) c;
	return (p);
*/
	while (len--)
		*((unsigned char*) b + len) = (unsigned char) c;
	return (b);
}
