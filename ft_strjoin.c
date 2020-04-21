/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 16:31:35 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/14 18:20:46 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str_len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str_len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = ft_calloc(str_len + 1, sizeof(char))))
		return (NULL);
	ft_strlcat(str, s1, str_len + 1);
	ft_strlcat(str, s2, str_len + 1);
	return (str);
}
