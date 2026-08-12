/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:35:15 by marisous          #+#    #+#             */
/*   Updated: 2026/07/30 15:35:17 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

void	ft_putnbr16(long long nb, int index, int option);
void	ft_write_16_chars(unsigned char *addr, int nchar);
void	ft_handle_end(unsigned char *addr, unsigned int index);

void	ft_handle_end(unsigned char *addr, unsigned int index)
{
	unsigned int	nb;

	nb = 15 - index % 16 ;
	while (nb > 0)
	{
		if (nb % 2 == 0)
			write(1, "  ", 2);
		else
			write(1, "   ", 3);
		nb--;
	}
	ft_write_16_chars(addr - 1, index % 16);
}

void	ft_putnbr16(long long nb, int index, int option)
{
	long long		pow16;
	unsigned char	c;

	if (! option)
		return ;
	pow16 = 16;
	if (nb > 16 * 16)
		pow16 = 0x1000000000000000;
	while (pow16 > 0)
	{
		c = '0' + nb / (pow16);
		if (nb / (pow16) > 9)
			c += 39;
		write(1, &c, 1);
		nb = nb % pow16;
		pow16 /= 16;
	}
	if (index == -1)
		write(1, ": ", 2);
	if (index % 2 == 1)
		write(1, " ", 1);
}

void	ft_write_16_chars(unsigned char *addr, int nchar)
{
	int				index;
	unsigned char	*c;

	if (nchar < 16)
	{
		nchar++;
		addr++;
	}
	c = addr;
	index = 0;
	c -= (nchar - 1);
	write(1, " ", 1);
	while ((index < nchar) && c <= addr)
	{
		if (*c < ' ' || *c > '~')
			write(1, ".", 1);
		else
			write(1, c, 1);
		c++;
		index++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	index;
	unsigned char	*c;

	if (!addr || size == 0)
		return (addr);
	index = 0;
	c = (unsigned char *) addr;
	while (index < size)
	{
		ft_putnbr16((long long) c, -1, index % 16 == 0);
		ft_putnbr16((long long) *c, index, 1);
		if (index == size - 1)
		{
			ft_handle_end(c, index);
			break ;
		}
		if (index % 16 == 15)
			ft_write_16_chars(c, 16);
		c++;
		index++;
	}
	return (addr);
}

/* int	main(void) */
/* { */
/* 	char	*a; */

/* 	a = NULL; */
/* 	a = "a"; */
/* 	a = "0123456789abcdef"; */
/* 	a = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut fai\ */
/* re avec\t\n\tprint_memory\n\n\n\tlol.lol\n "; */
/* 	ft_print_memory(a, 20); */
/* } */
