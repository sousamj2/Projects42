/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 09:18:42 by marisous          #+#    #+#             */
/*   Updated: 2026/08/08 09:18:44 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	retval;

	retval = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		retval *= nb;
		power--;
	}
	return (retval);
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	int	n; */
/* 	int	p; */

/* 	n = 3; */
/* 	p = 4; */
/* 	printf("Number [%d] evelated to the power [%d] is [%d]\n", */
/* 		   n,p,ft_iterative_power(n,p)); */

/* } */
