/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedsoare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 10:04:28 by pedsoare          #+#    #+#             */
/*   Updated: 2026/07/26 10:14:29 by pedsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 2343;
	b = 21;
	ft_div_mod(a, b, &div, &mod);
	printf("A: %d \nB: %d \nDiv: %d \nMod: %d", a, b, div, mod); 
	return 0;
}
*/
