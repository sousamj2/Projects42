/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:14:36 by marisous          #+#    #+#             */
/*   Updated: 2026/07/27 15:14:39 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temporary_pointer;

	temporary_pointer = *a;
	*a = *b;
	*b = temporary_pointer;
}

/* #include <stdio.h> */
/* int	main() */
/* { */
/* 	int a; */
/* 	int b; */
/* 	int *pointer_to_a; */
/* 	int *pointer_to_b; */

/* 	pointer_to_a = &a; */
/* 	pointer_to_b = &b; */
/* 	a = 24; */
/* 	b = 42; */
/* 	printf("Before the two numbers were %d and %d",a,b); */
/* 	ft_swap(pointer_to_a,pointer_to_b); */
/* 	printf(" and after swapping they have become %d and %d.",a,b); */
/* } */
