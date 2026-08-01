/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 18:08:00 by marisous          #+#    #+#             */
/*   Updated: 2026/07/23 18:08:03 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put3_chars_comma_space(char a, char b, char c);

void	ft_put3_chars_comma_space(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	st;
	char	nd;
	char	rd;

	st = '0';
	while (st <= '7')
	{
		nd = st + 1;
		while (nd <= '8')
		{
			rd = nd + 1;
			while (rd <= '9')
			{
				ft_put3_chars_comma_space(st, nd, rd);
				rd++;
			}
			nd++;
		}
		st++;
	}
}

/* /\* Uncomment the following section in order to test the code *\/ */
/* int	main(void) */
/* { */
/* 	ft_print_comb(); */
/* 	return (0); */
/* } */
