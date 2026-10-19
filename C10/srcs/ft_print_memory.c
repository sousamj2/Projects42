/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:35:15 by marisous          #+#    #+#             */
/*   Updated: 2026/09/25 12:39:16 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft.h"

/* void	*ft_print_memory(void *addr, unsigned int size); */

/* int		ft_convert_char_to_hex(unsigned char c, int index); */
/* void	ft_putnbr16(long nb, int index); */
/* void	ft_write_16_chars(unsigned char *addr, int nchar); */
/* void	ft_handle_end(unsigned char *addr, unsigned int index); */

void	ft_handle_end(int *params)
{
	int	nb;

	nb = 15 - params[3] % 16 ;
	while (nb > 0)
	{
		if (nb % 2 == 0)
			write(1, "   ", 3);
		else
			write(1, "   ", 3);
		nb--;
	}
	write(1, " ", 1);
}

void	ft_write_16_chars(unsigned char *addr, int nchar)
{
	int		index;
	unsigned char	*c;

	c = addr;
	index = 0;
	c -= (nchar - 1);
	write(1, "|", 1);
	while ((index < nchar ) && c <= addr)
	{
		if (*c < ' ' || *c > '~')
			write(1, ".", 1);
		else
			write(1, c, 1);
		c++;
		index++;
	}
	write(1, "|\n", 2);
}

void	ft_putnbr16(long nb, int *params, int is_long)
{
	long	pow16;
	unsigned char	c;

	pow16 = 0x10;
	if (is_long && params[1])
		pow16 = 0x10000000;
	else if (is_long && !params[1])
		pow16 = 0x1000000;
	else if (!params[1])
		pow16 = 0x1000;
	while (pow16 > 0)
	{
		c = '0' + nb / (pow16);
		if (nb / (pow16) > 9)
			c += 39;
		write(1, &c, 1);
		nb = nb % pow16;
		pow16 /= 16;
	}
	/* if (params[3] == -1) */
	/* 	write(1, " ", 1); */
	if (params[3] % 8 == 7 )
		write(1, " ", 1);
	write(1, " ", 1);
}

int	ft_convert_char_to_int(unsigned char c)
{
	unsigned int	nb;

	nb = 0;
	while (nb < 0x100)
	{
		if (c == nb)
			break ;
		nb++;
	}
	return (nb);
}

/* char	*ft_print_memory16(int *params, char *result) */
/* { */
/* 	unsigned char			*c; */

/* 	c = (unsigned char *) result; */
/* 	while (index < size +1) */
/* 	{ */
/* 		/\* if (*c == '\0' || index == size) *\/ */
/* 		/\* if (index == size) *\/ */
/* 		/\* { *\/ */
/* 		/\* 	ft_handle_end(c, index); *\/ */
/* 		/\* 	break ; *\/ */
/* 		/\* } *\/ */
/* 		if (params[3] % 16 == 0) */
/* 			ft_putnbr16(params[3], -1); */
/* 		ft_convert_char_to_int(*c, params[3]); */
/* 		if (params[3] % 16 == 15) */
/* 			ft_write_16_chars(c, 16); */
/* 		c++; */
/* 		index++; */
/* 	} */
/* 	return (addr); */
/* } */

/* int	main(void) */
/* { */
/* 	char	*a; */

/* 	a = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut fai\ */
/* re avec\t\n\tprint_memory\n\n\n\tlol.lol\n "; */
/* 	ft_print_memory(a, 91); */
/* } */
/*
1. Size % 16 = {-1,0,1}
2. Size more than string && len(string) % 16 = {-2,0,+4}
3. Size
 */
