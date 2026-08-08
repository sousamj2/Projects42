/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 09:19:04 by marisous          #+#    #+#             */
/*   Updated: 2026/08/08 09:19:05 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	int	n; */
/* 	int	p; */

/* 	n = 3; */
/* 	p = 4; */
/* 	printf("Number [%d] evelated to the power [%d] is [%d]\n", */
/* 		   n,p,ft_recursive_power(n,p)); */
/* } */
