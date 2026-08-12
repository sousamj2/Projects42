/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 18:08:00 by marisous          #+#    #+#             */
/*   Updated: 2026/07/25 15:56:14 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putnbr(int value);
int		ft_accept_number(int value);
int		ft_breakpoint(int n, int number);

int	ft_breakpoint(int n, int number)
{
	if ((n == 1 && number == 9)
		|| (n == 2 && number == 89)
		|| (n == 3 && number == 789)
		|| (n == 4 && number == 6789)
		|| (n == 5 && number == 56789)
		|| (n == 6 && number == 456789)
		|| (n == 7 && number == 3456789)
		|| (n == 8 && number == 23456789)
		|| (n == 9 && number == 123456789))
		return (1);
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
		return (0);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putnbr(int value)
{
	int	pow10;

	if (value == 0)
		return ;
	pow10 = 100000000;
	while (value / pow10 == 0)
		pow10 /= 10;
	while (value > 0)
	{
		ft_putchar('0' + value / (pow10));
		value = value % pow10;
		pow10 /= 10;
	}
}

void	ft_print_combn(int n)
{
	int	pow10;
	int	value;
	int	i;

	i = 0;
	pow10 = 1;
	while (i < n)
	{
		pow10 *= 10;
		i++;
	}
	value = pow10 / 100;
	while (value < pow10)
	{
		if (ft_accept_number(value))
		{
			if (value < pow10 / 10)
				ft_putchar('0');
			ft_putnbr(value);
			if (ft_breakpoint(n, value))
				return ;
		}
		value++;
	}
}

int	ft_accept_number(int value)
{
	int	pow10;
	int	this_dig ;
	int	next_dig ;

	pow10 = 1;
	while (value / pow10 > 0)
		pow10 *= 10;
	pow10 /= 10;
	if (pow10 == 0)
		return (1);
	while (pow10 != 1)
	{
		this_dig = value / pow10;
		value -= value / pow10 * pow10;
		pow10 /= 10;
		next_dig = value / pow10;
		if (this_dig >= next_dig)
			return (0);
	}
	return (1);
}

/* Uncomment the following section in order to test the code */
int	main(void)
{
	ft_print_combn(9);
	return (0);
}
/* ft_print_combn(1); */
/* ft_print_combn(2); */
/* ft_print_combn(3); */
/* ft_print_combn(4); */
/* ft_print_combn(5); */
/* ft_print_combn(6); */
/* ft_print_combn(7); */
/* ft_print_combn(8); */
/* ft_print_combn(9); */
