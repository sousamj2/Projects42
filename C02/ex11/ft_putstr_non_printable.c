/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 13:41:55 by marisous          #+#    #+#             */
/*   Updated: 2026/07/30 13:41:57 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str);
int		ft_str_is_printable(char *str);

int		ft_convert_char_to_hex(char c);

short int	ft_convert_char_to_int(char c)
{
	short int	i_char;

	i_char = 0;
	while (i_char < 256)
	{
		if (c == i_char)
			return (i_char);
		i_char++;
	}
	return (-1);
}

void	ft_write_int_as_hexa(short int num);

void	ft_write_int_as_hexa(short int num)
{
	char	c;
	int		div;
	int		mod;

	if (num > 256)
		return ;
	div = num / 16;
	mod = num % 16;
	write(1, "\\", 1);
	c = '0' + div;
	if (div > 9)
		c += 39;
	write(1, &c, 1);
	c = '0' + mod;
	if (mod > 9)
		c += 39;
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;
	int	itohex;

	if (!str)
		return ;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < ' ' || str[index] > '~')
		{
			itohex = ft_convert_char_to_int(str[index]);
			ft_write_int_as_hexa(itohex);
		}
		else
			write(1, &str[index], 1);
		index++;
	}
}

/* int	main(void) */
/* { */
/* 	char	src [] = "H\bello\\ \a\nSa\trg\ved\177 as!"; */

/* 	printf("src  is [%s]\n", src); */
/* 	printf("updated is:\n"); */
/* 	ft_putstr_non_printable(src); */
/* 	printf("\n"); */
/* 	printf("H\\08ello\\ \\07\\0aSa\\09rg\\0bed\\7f as!"); */
/* 	return (0); */
/* } */
