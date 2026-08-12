/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcruz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 10:05:14 by matcruz           #+#    #+#             */
/*   Updated: 2026/07/26 09:09:32 by matcruz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int d1, int d2)
{
	char	c0;
	char	c1;
	char	c2;
	char	c3;

	c0 = '0' + (d1 / 10);
	c1 = '0' + (d1 % 10);
	c2 = '0' + (d2 / 10);
	c3 = '0' + (d2 % 10);
	write(1, &c0, 1);
	write(1, &c1, 1);
	write(1, " ", 2);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (d1 != 98 || d2 != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	d1;
	int	d2;

	d1 = 0;
	d2 = 1;
	while (d1 <= 98)
	{
		while (d2 <= 99)
		{
			ft_write(d1, d2);
			d2++;
		}
		d1++;
		d2 = d1 + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
}
