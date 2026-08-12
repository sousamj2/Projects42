/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lurodri2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 14:18:55 by lurodri2          #+#    #+#             */
/*   Updated: 2026/07/30 08:39:46 by lurodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	if (!a || !b)
	{
		return ;
	}
	temp = *a;
	*a = *b;
	*b = temp;
}
/*int main (void)
{	int a = 7;
	int b = 6;
	printf("Antes: a = %d, b = %d",a, b);
	ft_swap(&a,&b);
	printf(" Depois: a = %d, b = %d",a, b);
}*/
