/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:33:16 by marisous          #+#    #+#             */
/*   Updated: 2026/07/24 13:33:22 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write_2_digits(int num, char order);

void	ft_write_2_digits(int num, char order)
{
	char	units;
	char	tentns;

	units = '0' + num % 10;
	tentns = '0' + num / 10;
	write(1, &tentns, 1);
	write(1, &units, 1);
	if (order == '0')
		write(1, " ", 1);
	if (order == '1')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99 && num1 < num2)
		{
			ft_write_2_digits(num1, '0');
			if (num1 == 98)
				ft_write_2_digits(num2, '2');
			else
				ft_write_2_digits(num2, '1');
			num2++;
		}
		num1++;
	}
}

/* Uncomment the following section in order to test the code */
int	main(void)
{
	ft_print_comb2();
	return (0);
}
