/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 09:15:24 by marisous          #+#    #+#             */
/*   Updated: 2026/07/28 09:15:25 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	int	a; */
/* 	int b; */

/* 	a = 42; */
/* 	b = 17; */
/* 	printf("%d divided by %d is ", a,b); */
/* 	ft_ultimate_div_mod(&a, &b); */
/* 	printf("%d with a %d leftover.\n", a,b); */
/* } */
