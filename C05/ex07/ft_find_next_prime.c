/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 09:22:38 by marisous          #+#    #+#             */
/*   Updated: 2026/08/08 09:22:40 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);

//int	ft_is_prime(int nb);
int	ft_check_mod(long nb, long div, long max);

int	ft_find_next_prime(int nb)
{
	long	max;

	if (nb < 2)
		return (2);
	if (nb == 2 || (nb < 9 && nb % 2 != 0))
		return (nb);
	else if (nb < 8 && nb % 2 == 0)
		return (nb + 1);
	max = 2;
	while (max * max < (long) nb)
		max += 2;
	while (!ft_check_mod(nb, 3, max))
	{
		if (nb % 2 == 0)
			nb--;
		nb += 2;
	}
	return (nb);
}

int	ft_check_mod(long nb, long div, long max)
{
	if (nb % 2 == 0)
		return (0);
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
/* 	int nb = 14; */
/* 	if (argc != 1) */
/* 		nb = atoi(argv[1]); */
/* 	printf("Next prime of number %d is %d.\n", nb, ft_find_next_prime(nb)); */
/* } */
