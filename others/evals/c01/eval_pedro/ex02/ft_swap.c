/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 09:59:55 by pedsoare          #+#    #+#             */
/*   Updated: 2026/07/26 10:16:25 by pedsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	help_nmb;

	help_nmb = *a;
	*a = *b;
	*b = help_nmb;
}
/*	
int main()
{
	int a;
	int b;

	a = 32;
	b = 86;
	printf("Starting a: %d \n", a);
	printf("Starting b: %d \n", b);
	ft_swap(&a, &b);
	printf("Swapped a: %d \n", a);
	printf("Swapped b: %d \n", b);
}
*/
