/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrigfe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 12:03:09 by rodrigfe          #+#    #+#             */
/*   Updated: 2026/08/12 11:52:41 by rodrigfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int a = 45;
	int b = 5;
	int v1 = 0;
	int v2 = 0;
	int *div = &v1;
	int *mod = &v2;
	ft_div_mod(a, b, div, mod);
}*/
