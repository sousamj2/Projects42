/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 17:41:20 by marisous          #+#    #+#             */
/*   Updated: 2026/07/23 17:41:27 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_numbers(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_print_numbers(void)
{
	char	iletter;

	iletter = '0';
	while (iletter <= '9' )
	{
		ft_putchar(iletter);
		iletter++;
	}
}

/* Uncomment the following section in order to test the code */
int	main(void)
{
	ft_print_numbers();
	return (0);
}
