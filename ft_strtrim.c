/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 18:29:28 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/21 16:56:26 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rear;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (!(ft_strchr(set, *s1)))
			break ;
		s1++;
	}
	rear = (char *)s1 + (ft_strlen(s1) - 1);
	while (rear >= s1)
	{
		if (!(ft_strchr(set, *rear)))
			break ;
		rear--;
	}
	return (ft_substr(s1, 0, ++rear - s1));
}
