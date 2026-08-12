/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergiom2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 11:28:37 by sergiom2          #+#    #+#             */
/*   Updated: 2026/07/25 09:31:58 by sergiom2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_char_print(a / 10 + '0');
			ft_char_print(a % 10 + '0');
			ft_char_print(' ');
			ft_char_print(b / 10 + '0');
			ft_char_print(b % 10 + '0');
			if (!(a == 98 && b == 99))
			{
				ft_char_print(',');
				ft_char_print(' ');
			}
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
