/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcruz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 11:21:44 by matcruz           #+#    #+#             */
/*   Updated: 2026/07/25 19:31:52 by matcruz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_special(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
}

void	ft_putnbr(int nb)
{
	int		help_nb;
	int		div;
	char	number;

	ft_special(nb);
	div = 1;
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	help_nb = nb;
	
	while (help_nb > 9 && nb != -2147483648)
	{
		div = div * 10;
		help_nb = nb / div;
	}
	
	while (div != 0 && nb != -2147483648)
	{
		help_nb = nb / div;
		number = '0' + help_nb;
		write(1, &number, 1);
		nb = nb % div;
		div = div / 10;
	}
}

int	main(void)
{
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(56420);
	write(1, "\n", 1);
	ft_putnbr(-2345);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
}
