/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcruz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 15:30:53 by matcruz           #+#    #+#             */
/*   Updated: 2026/07/26 09:07:20 by matcruz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char d1, char d2, char d3)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, &d3, 1);
	if (d1 != '7' || d2 != '8' || d3 != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0';
	d2 = '1';
	d3 = '2';
	while (d1 <= '7')
	{
		while (d2 <= '8')
		{
			while (d3 <= '9')
			{
				ft_write(d1, d2, d3);
				d3++;
			}
			d2++;
			d3 = d2 + 1;
		}
		d1++;
		d2 = d1 + 1;
		d3 = d2 + 1;
	}
}

int	main(void)
{
	ft_print_comb();
}
