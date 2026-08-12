/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgomes <afgomes@student.42lisboa.pt>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:29:51 by afgomes           #+#    #+#             */
/*   Updated: 2026/07/25 10:29:54 by afgomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	ft_negative(long nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	long	temp;
	int		number;
	int		order;
	int		maxorder;
	long	good_nb;

	good_nb = nb;
	good_nb = ft_negative(good_nb);
	maxorder = 1;
	temp = good_nb;
	while (temp >= 10)
	{
		temp = temp / 10;
		maxorder *= 10;
	}
	order = maxorder;
	while (order >= 1)
	{
		temp = (good_nb / order);
		temp = (temp % 10);
		number = (char)('0' + temp);
		write(1, &number, 1);
		order /= 10;
	}
}

/*int	main(void)
{
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
	return (0);
}*/


/* Uncomment the following section in order to test the code */
int	main(void)
{
	ft_putnbr(300);
	write(1,"\n",1);
	write(1,"\n",1);
	ft_putnbr(-4452500);
	write(1,"\n",1);
	ft_putnbr(520);
	write(1,"\n",1);
	ft_putnbr(-4434525);
	write(1,"\n",1);
	ft_putnbr(445634525);
	write(1,"\n",1);
	ft_putnbr(-445634525);
	write(1,"\n",1);
	ft_putnbr(0);
	write(1,"\n",1);
	write(1,"\n",1);
	ft_putnbr(-2147483648);
	write(1,"\n",1);
	ft_putnbr(-2147483647);
	write(1,"\n",1);
	ft_putnbr(2147483647);
	write(1,"\n",1);
	ft_putnbr(2147483646);
	write(1,"\n",1);
	return (0);
}
