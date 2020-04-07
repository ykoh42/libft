/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang <jikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:31:40 by jikang            #+#    #+#             */
/*   Updated: 2020/04/07 16:02:24 by jikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
void									ft_putnbr(int number)
{
	if (number == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648);
	}
	else if (number < 0)
	{
		write(1, "-", 1);
		ft_putnbr(number * -1);
	}
	else if (number > 9)
		ft_putnbr(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}
int		main(int argc, const char *argv[])
{
	int		arg;
	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_putnbr(0);
	else if (arg == 2)
		ft_putnbr(5);
	else if (arg == 3)
		ft_putnbr(-5);
	else if (arg == 4)
		ft_putnbr(42);
	else if (arg == 5)
		ft_putnbr(-57);
	else if (arg == 6)
		ft_putnbr(164189);
	else if (arg == 7)
		ft_putnbr(-987441);
	else if (arg == 8)
		ft_putnbr(2147483647);
	else if (arg == 9)
		ft_putnbr(-2147483648LL);
	return (0);
}