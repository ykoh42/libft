/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:18:34 by ykoh              #+#    #+#             */
/*   Updated: 2020/05/06 16:41:07 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const size_t	needle_len = ft_strlen(needle);

	if (*needle)
	{
		if (len == 0)
			return (NULL);
		while (len-- && ft_strncmp(haystack, needle, needle_len) != 0)
		{
			if (len < needle_len)
				return (NULL);
			if (*haystack == '\0')
				return (NULL);
			haystack++;
		}
	}
	return ((char *)haystack);
}
