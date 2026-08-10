/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 11:50:19 by marisous          #+#    #+#             */
/*   Updated: 2026/08/08 11:50:21 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);
int	ft_check_mod(long nb, long div, long max);

int	ft_is_prime(int nb)
{
	long	max;

	if (nb < 2)
		return (0);
	if (nb == 2 || (nb < 9 && nb % 2 != 0))
		return (1);
	else if (nb % 2 == 0)
		return (0);
	max = 3;
	while (max * max < (long) nb)
		max += 2;
	return (ft_check_mod(nb, 3, max));
}

int	ft_check_mod(long nb, long div, long max)
{
	if (nb % div == 0)
		return (0);
	if (div < max + 2 && !ft_check_mod(nb, div + 2, max))
		return (0);
	return (1);
}

/* #include <stdio.h> */
/* #include <stdlib.h> */
/* int main(int argc, char *argv[]) */
/* { */
/* 	int nb = 9; */
/* 	if (argc != 1) */
/* 		nb = atoi(argv[1]); */
/* 	printf("Number %d is %sprime.\n", nb, ft_is_prime(nb) ? "" : "not "); */
/* } */
