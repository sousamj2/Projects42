/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:37:29 by marisous          #+#    #+#             */
/*   Updated: 2026/08/04 15:37:31 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	*index_c;

	index_c = str;
	while (*index_c > '\0')
	{
		ft_putchar(*index_c);
		index_c++;
	}
}

/* int	main(void) */
/* { */
/* 	char	*test_string; */

/* 	test_string = "Hello Sargedas!\n"; */
/* 	ft_putstr(test_string); */
/* } */
