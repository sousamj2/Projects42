/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:55:21 by marisous          #+#    #+#             */
/*   Updated: 2026/07/23 14:48:44 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_reverse_alphabet(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_print_reverse_alphabet(void)
{
	char	iletter;

	iletter = 'z';
	while (iletter >= 'a' )
	{
		ft_putchar(iletter);
		iletter--;
	}
}

/* /\* Uncomment the following section in order to test the code *\/ */
/* int	main(void) */
/* { */
/* 	ft_print_reverse_alphabet(); */
/* 	return (0); */
/* } */
