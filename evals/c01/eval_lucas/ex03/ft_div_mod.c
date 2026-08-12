/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurodri2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:34:21 by lurodri2          #+#    #+#             */
/*   Updated: 2026/07/30 08:40:46 by lurodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (!a || !b)
	{
		return ;
	}
	*div = a / b;
	*mod = a % b;
}
/*int main (void)
{	int a = 12;
	int b = 10;
	int r_div;
	int r_mod;
	ft_div_mod(a,b,&r_div,&r_mod);
	printf("Div: %d e Mod: %d",r_div, r_mod);	
}*/
