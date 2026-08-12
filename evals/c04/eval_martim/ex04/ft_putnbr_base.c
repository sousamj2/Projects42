/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <student.42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-08-03 21:06:09 by marvin            #+#    #+#             */
/*   Updated: 2026-08-03 21:06:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int		len;

	if (!ft_check_base(base))
		return ;
	len = ft_strlen(base);
	num = nbr;
	if (num < 0)
	{
		write (1, "-", 1);
		num *= -1;
	}
	if (num >= len)
	{
		ft_putnbr_base (num / len, base);
	}
	write (1, &base[num % len], 1);
}
/*
#include <stdio.h>

int main(void)
{
    int     nbr = 4;
    char    *base = "01"; 

    printf("Antes do putnbr (Decimal): %d\n", nbr);
    printf("Depois do putnbr (Binário): \n");
    
    ft_putnbr_base(nbr, base);
    
    printf("\n");
    
    return (0);
}*/
