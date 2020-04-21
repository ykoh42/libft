/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 17:14:05 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/21 14:14:13 by ykoh             ###   ########.fr       */
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

static void		ft_free_all(char **ret, size_t splitcnt)
{
	while (splitcnt--)
		if (ret[splitcnt - 1] != NULL)
			free(ret[splitcnt - 1]);
	free(ret);
}

char			**ft_split(char const *s, char c)
{
	const size_t	splitcnt = ft_splitcnt(s, c);
	const char		*p = s;
	char			**ret;
	char			*end;
	size_t			i;

	if (!s || !(ret = ft_calloc(splitcnt, sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < splitcnt)
	{
		if (*s != c)
		{
			if (!(end = ft_strchr(s, c)))
				end = (char *)p + ft_strlen(p);
			if (!(ret[i++] = ft_substr(s, 0, end - s)))
			{
				ft_free_all(ret, splitcnt);
				return (NULL);
			}
			s = end;
		}
		s++;
	}
	return (ret);
}
