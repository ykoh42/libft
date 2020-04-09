/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 20:31:13 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/09 20:49:02 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	const size_t	len = ft_strlen(s1);
	char			*dst;

	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strlcpy(dst, s1, len + 1);
	return (dst);
}
