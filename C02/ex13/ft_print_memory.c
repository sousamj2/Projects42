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
#include <stdio.h>

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);

int		ft_convert_char_to_hex(char c, int index);
void	ft_putnbr16(long nb, int index);
void	ft_write_16_chars(char *addr, int nchar);
void	ft_handle_end(char *addr, unsigned int index);

void	ft_handle_end(char *addr, unsigned int index)
{
	unsigned int	nb;

	ft_putnbr16(0, index);
	nb = 15 - index % 16 ;
	while (nb > 0)
	{
		if (nb % 2 == 0)
			write(1, "  ", 2);
		else
			write(1, "   ", 3);
		nb--;
	}
	ft_write_16_chars(addr, index % 16);
}

void	ft_write_16_chars(char *addr, int nchar)
{
	int		index;
	char	*c;

	c = addr;
	index = 0;
	c -= (nchar - 1);
	write(1, " ", 1);
	while ((index < nchar || *c != '\0' ) && c <= addr)
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

void	ft_putnbr16(long nb, int index)
{
	long	pow16;
	char	c;

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

void	ft_convert_char_to_int(char c, int index)
{
	long	nb;

	nb = 0;
	while (nb < 256)
	{
		if (c == nb)
			ft_putnbr16(nb, index);
		nb++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	index;
	char			*c;

	if (!addr || size == 0)
		return (addr);
	index = 0;
	c = (char *) addr;
	while (index < size +1)
	{
		if (*c == '\0' || index == size)
		{
			ft_handle_end(c, index);
			break ;
		}
		if (index % 16 == 0)
			ft_putnbr16((long) c, -1);
		ft_convert_char_to_int(*c, index);
		if (index % 16 == 15)
			ft_write_16_chars(c, 16);
		c++;
		index++;
	}
	return (addr);
}

int	main(void)
{
	char	*a;

	a = "Bonjour les aminches\t\n\tc\a est fou\ttout\tce qu on peut fai\
re avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	ft_print_memory(a, 100);
}
/*
1. Size % 16 = {-1,0,1}
2. Size more than string && len(string) % 16 = {-2,0,+4}
3. Size
 */
