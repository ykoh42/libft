/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykoh <ykoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:18:13 by ykoh              #+#    #+#             */
/*   Updated: 2020/03/06 15:19:49 by ykoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint (int c)
{
	return (c >= 32 && c <= 126);
}
