/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgomes <afgomes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 09:16:52 by afgomes           #+#    #+#             */
/*   Updated: 2026/07/25 09:16:59 by afgomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int z)
{
	char	text;

	text = ('0' + x);
	write(1, &text, 1);
	text = ('0' + y);
	write(1, &text, 1);
	text = ('0' + z);
	write(1, &text, 1);
	if (!(x == 7 && y == 8 && z == 9))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				if (y != z && x != z && x != y)
					ft_putchar(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
