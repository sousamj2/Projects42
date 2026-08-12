/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 13:16:47 by lvieira           #+#    #+#             */
/*   Updated: 2026/08/03 14:32:15 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempd;
	int	tempm;

	tempd = *a / *b;
	tempm = *a % *b;
	*a = tempd;
	*b = tempm;
}

/*void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	na;
	int	nb;
	int	*a;
	int	*b;

	na = 426;
	nb = 10;
	a = &na;
	b = &nb;
	ft_ultimate_div_mod(a, b);
	ft_putnbr(na);
	write(1, "\n", 1);
	ft_putnbr(nb);
	return (0);
}*/
