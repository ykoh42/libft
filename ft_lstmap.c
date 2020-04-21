/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 21:04:49 by ykoh              #+#    #+#             */
/*   Updated: 2020/04/21 15:07:16 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	const t_list	*lstp = lst;
	void			*is_success;
	t_list			*ret;
	t_list			*new;

	ret = NULL;
	new = NULL;
	while (lstp)
	{
		if ((is_success = f(lstp->content)))
		{
			if (!(new = ft_lstnew(is_success)))
			{
				ft_lstclear(&lst, del);
				return (NULL);
			}
			ft_lstadd_back(&ret, new);
		}
		lstp = lstp->next;
	}
	return (ret);
}
