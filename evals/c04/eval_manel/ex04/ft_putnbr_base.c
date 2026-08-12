/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 13:26:19 by mravara           #+#    #+#             */
/*   Updated: 2026/07/30 13:26:20 by mravara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
		return (i);
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	if (!base || len < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		div;
	long	num;

	if (!check_base(base))
		return ;
	num = nbr;
	div = ft_strlen(base);
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num >= div)
		ft_putnbr_base(num / div, base);
	write(1, &base[num % div], 1);
}

// int	main(void)
// {
// 	ft_putnbr_base(42, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-42, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(0, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(2147483647, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-2147483648, "0123456789");
// 	write(1, "\n", 1);

// 	ft_putnbr_base(42, "0123456789BACDEF");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "poneyvif");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(42, "01");
// 	write(1, "\n", 1);
// }