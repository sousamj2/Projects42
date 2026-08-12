/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccapelet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 16:52:00 by ccapelet          #+#    #+#             */
/*   Updated: 2026/07/25 16:53:43 by ccapelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/* Uncomment the following section in order to test the code */
int	main(void)
{
	ft_is_negative(1);
	ft_is_negative(1535);
	ft_is_negative(165);
	ft_is_negative(-236);
	ft_is_negative(0);
	ft_is_negative(-33);
	return (0);
}
