/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 13:31:48 by lvieira           #+#    #+#             */
/*   Updated: 2026/08/08 10:24:06 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*void  ft_putnbr(int n)
{
        char    c;

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
	int	*pna;
	int	*pnb;

	na = 1256;
	nb = 120;
	pna = &na;
	pnb = &nb;
	ft_div_mod(na, nb, pna, pnb);
	ft_putnbr(na);
	write(1, "\n", 1);
        ft_putnbr(nb);
	return (0);
}*/
