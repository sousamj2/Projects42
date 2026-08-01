/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 08:34:47 by marisous          #+#    #+#             */
/*   Updated: 2026/07/28 08:34:49 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	int	a; */
/* 	int b; */
/* 	int div; */
/* 	int mod; */

/* 	a = 42; */
/* 	b = 17; */
/* 	ft_div_mod(a, b, &div, &mod); */
/* 	printf("%d divided by %d is %d with a %d leftover.\n", a,b,div,mod); */
/* } */
