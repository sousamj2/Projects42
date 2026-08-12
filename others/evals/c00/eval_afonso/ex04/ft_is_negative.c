/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgomes <afgomes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 09:07:23 by afgomes           #+#    #+#             */
/*   Updated: 2026/07/25 09:07:23 by afgomes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write (1, "P", 1);
}

int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(1);
	ft_is_negative(0);
	return (0);
}
