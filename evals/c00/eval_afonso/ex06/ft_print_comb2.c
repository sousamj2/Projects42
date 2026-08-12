/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgomes <afgomes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 09:53:16 by afgomes           #+#    #+#             */
/*   Updated: 2026/07/25 09:53:23 by afgomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int number)
{
	char	text;

	if (number < 10)
	{
		write(1, "0", 2);
		text = ('0' + number);
		write(1, &text, 1);
	}
	else
	{
		text = ('0' + (number / 10));
		write(1, &text, 1);
		text = ('0' + (number % 10));
		write(1, &text, 1);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			if (x != y)
			{
				ft_putchar(x);
				write(1, " ", 2);
				ft_putchar(y);
				if (!(x == 98 && y == 99))
					write(1, ", ", 3);
			}
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
