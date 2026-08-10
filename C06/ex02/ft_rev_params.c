/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 11:25:42 by marisous          #+#    #+#             */
/*   Updated: 2026/08/10 11:25:43 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_str(char *str);

void	ft_print_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argn, char *argv[])
{
	int	iarg;

	iarg = argn - 1;
	while (iarg > 0)
	{
		ft_print_str(argv[iarg]);
		iarg--;
	}
	return (0);
}
