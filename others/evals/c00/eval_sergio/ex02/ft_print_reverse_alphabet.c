/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergiom2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 06:57:33 by sergiom2          #+#    #+#             */
/*   Updated: 2026/07/24 10:45:52 by sergiom2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	data;

	data = 'z';
	while (data >= 'a')
	{
		write(1, &data, 1);
		data--;
	}
	write(1, "\n", 1);
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
