/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 17:41:20 by marisous          #+#    #+#             */
/*   Updated: 2026/07/23 17:46:53 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

/* Uncomment the following section in order to test the code */
int	main(void)
{
	ft_is_negative(1);
	ft_is_negative(1535);
	ft_is_negative(165);
	ft_is_negative(-236);
	ft_is_negative(0);
	ft_is_negative(-33);
	return (0);
}
