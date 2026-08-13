/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 12:11:14 by rodrigfe          #+#    #+#             */
/*   Updated: 2026/08/12 11:34:40 by rodrigfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res;
	int	div;

	div = *a / *b;
	res = *a % *b;
	*a = div;
	*b = res;
}
/*int main()
{
	int	v1 = 15;
	int	v2 = 3;
	int	*a = &v1;
	int	*b = &v2;
	ft_ultimate_div_mod(a, b);

}*/
