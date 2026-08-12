/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 16:24:52 by lvieira           #+#    #+#             */
/*   Updated: 2026/07/31 12:10:30 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	caixa;
	int	caixb;
	int	*ca;
	int	*cb;

	caixa = 41;
	ca = &caixa;
	caixb = 42;
	cb = &caixb;
	ft_swap(ca, cb);
	if (caixa == 42 && caixb == 41)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "KO\n", 3);
	}
	return (0);
}*/
