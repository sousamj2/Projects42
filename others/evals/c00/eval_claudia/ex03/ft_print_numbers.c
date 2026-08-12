/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccapelet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 16:31:13 by ccapelet          #+#    #+#             */
/*   Updated: 2026/07/25 16:31:19 by ccapelet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9' + 3)
	{
		write(1, &c, 1);
		c++;
	}
}


/* Uncomment the following section in order to test the code */
int	main(void)
{
	ft_print_numbers();
	return (0);
}
