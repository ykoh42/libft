/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 17:47:33 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/10 23:49:50 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	res;

	while (n--)
	{
		if ((res = (unsigned char)*s1++ - (unsigned char)*s2++) || *s1 == '\0')
			return (res);
	}
	return (0);
}
