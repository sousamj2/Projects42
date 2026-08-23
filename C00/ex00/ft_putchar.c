/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:55:21 by marisous          #+#    #+#             */
/*   Updated: 2026/08/23 19:00:00 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
   This is the documentation.
 */
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}
// test

/* int main(void) */
/* { */
/* 	ft_putchar('A'); */
/* 	return (0); */
/* } */

