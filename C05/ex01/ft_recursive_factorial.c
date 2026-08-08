/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 09:18:22 by marisous          #+#    #+#             */
/*   Updated: 2026/08/08 09:18:25 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/* #include <stdio.h> */
/* int main(void) */
/* { */
/* 	int nb = 5; */
/* 	printf("The factorial of %d is [%d]\n", nb,ft_recursive_factorial(nb)); */
/* 	return (0); */
/* } */
