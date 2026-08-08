/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 09:19:28 by marisous          #+#    #+#             */
/*   Updated: 2026/08/08 09:19:29 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	int index = -2; */
/* 	while (index <= 10) */
/* 	{ */
/* 		printf("%d: %d\n", index, ft_fibonacci(index)); */
/* 		index++; */
/* 	} */
/* 	return (0); */
/* } */
