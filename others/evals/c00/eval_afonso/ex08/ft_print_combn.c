/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgomes <afgomes@student42lisboa.pt>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 09:15:45 by afgomes           #+#    #+#             */
/*   Updated: 2026/07/28 09:16:25 by afgomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_power(int nbr, int pow)
{
	int	res;

	res = nbr;
	if (pow == 0)
		return (1);
	while (pow > 1)
	{
		res = res * nbr;
		pow--;
	}
	return (res);
}

int	ft_find_last_number(int n)
{
	int	number;
	int	digits;
	int	order;

	digits = 9;
	order = 1;
	number = 0;
	while (n > 0)
	{
		number += digits * order;
		order = order * 10;
		n--;
		digits--;
	}
	return (number);
}

int	ft_find_first_number(int n)
{
	int	number;
	int	digits;
	int	order;

	digits = n - 1;
	order = 1;
	number = 0;
	while (n > 1)
	{
		number += digits * order;
		order = order * 10;
		n--;
		digits--;
	}
	return (number);
}

void	ft_output(int nbr, int n)
{
	char	to_write;
	int		last_number;
	int		original_number;

	last_number = ft_find_last_number(n);
	original_number = nbr;
	while (n > 0)
	{
		to_write = ((nbr / ft_power(10, n - 1)) % 10) + '0';
		write(1, &to_write, 1);
		nbr = nbr % ft_power(10, n - 1);
		n--;
	}
	if (original_number != last_number)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	number;
	int	analysed_number;
	int	digit;
	int	noprint;
	int	order;

	number = ft_find_first_number(n);
	while (number <= ft_find_last_number(n))
	{
		noprint = 0;
		order = n;
		analysed_number = number;
		while (analysed_number / 10 > 0)
		{
			order--;
			digit = analysed_number % 10;
			analysed_number = analysed_number / 10;
			if (digit <= analysed_number % 10)
				noprint = 1;
		}
		if (!noprint)
			ft_output(number, n);
		number++;
	}
}

int	main(void)
{
	ft_print_combn(10);
	return (0);
}
