/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 09:19:53 by marisous          #+#    #+#             */
/*   Updated: 2026/08/08 09:21:05 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_iterative(int nb);
int	ft_sqrt(int nb);

int	ft_perfect_square(int sqrt, int nb);

int	ft_perfect_square(int sqrt, int nb)
{
	if (sqrt * sqrt < 0)
		return (0);
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (ft_perfect_square(sqrt + 1, nb));
}

int	ft_sqrt_iterative(int nb)
{
	int	sqrt;

	if (nb == 0 || nb == 1)
		return (nb);
	sqrt = 2;
	while (sqrt * sqrt <= nb && sqrt * sqrt > 0)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	return (ft_perfect_square(2, nb));
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	int index = -2; */
/* 	while (index <= 100) */
/* 	{ */
/* 		printf("\\sqrt(%d) = %d\n", index, ft_sqrt(index)); */
/* 		index++; */
/* 	} */
/* 	return (0); */
/* } */
