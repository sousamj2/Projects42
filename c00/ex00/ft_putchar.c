/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:55:21 by marisous          #+#    #+#             */
/*   Updated: 2026/07/23 13:55:26 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

/* /\* Uncomment the following section in order to test the code *\/ */
/* int	main(void) */
/* { */
/* 	ft_putchar('A'); */
/* 	return (0); */
/* } */
