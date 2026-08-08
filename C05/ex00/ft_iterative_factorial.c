/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 09:18:02 by marisous          #+#    #+#             */
/*   Updated: 2026/08/08 09:18:04 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (factorial);
	while (nb > 1)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

/* #include <stdio.h> */
/* int main(void) */
/* { */
/* 	int nb = 5; */
/* 	printf("The factorial of %d is [%d]\n", nb,ft_iterative_factorial(nb)); */
/* 	return (0); */
/* } */
