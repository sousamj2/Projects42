/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 10:17:29 by pedsoare          #+#    #+#             */
/*   Updated: 2026/07/26 17:08:59 by pedsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	*a = tmp_a / tmp_b;
	*b = tmp_a % tmp_b;
}
/*
int main()
{
	int	a;
	int	b;

	a = 125;
	b = 24;
	printf("Starting A: %d \nStarting B: %d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Final A: %d \nFinal B: %d \n", a, b);
	return 0;
}
*/
