/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 17:14:05 by ykoh              #+#    #+#             */
/*   Updated: 2020/05/05 00:54:00 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_splitcnt(char const *s, char c)
{
	char	flg;
	size_t	cnt;

	if (!s)
		return (0);
	cnt = 0;
	flg = 1;
	while (*s)
	{
		if (*s == c)
			flg = 1;
		else
		{
			(flg == 1) ? cnt++ : cnt;
			flg = 0;
		}
		s++;
	}
	return (cnt);
}

static void		ft_freeall(char **ret)
{
	while (*ret)
		if (*ret != NULL)
			free(*ret++);
	free(ret);
}

char			**ft_split(char const *s, char c)
{
	const size_t	splitcnt = ft_splitcnt(s, c);
	const char		*p = s;
	char			**ret;
	char			*end;
	size_t			i;

	if (!s || !(ret = ft_calloc(splitcnt + 1, sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < splitcnt)
	{
		if (*s != c)
		{
			if (!(end = ft_strchr(s, c)))
				end = (char *)p + ft_strlen(p);
			if (!(ret[i++] = ft_strndup(s, end - s)))
			{
				ft_freeall(ret);
				return (NULL);
			}
			s = end;
		}
		s++;
	}
	return (ret);
}
