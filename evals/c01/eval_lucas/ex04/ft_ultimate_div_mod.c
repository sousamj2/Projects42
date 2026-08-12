/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurodri2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:55:39 by lurodri2          #+#    #+#             */
/*   Updated: 2026/07/30 08:42:31 by lurodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	sv_1;

	if (!a || !b)
	{
		return ;
	}
	sv_1 = *a / *b;
	*b = *a % *b;
	*a = sv_1;
}
/*int main (void)
{
	int a = 12;
	int b= 10;
	printf("Antes a=%d e b=%d",a,b);
	ft_ultimate_div_mod(&a,&b);
	printf(" Depois a=%d e b=%d",a,b);
}*/
