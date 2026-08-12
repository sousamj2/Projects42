/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsereno <vsereno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 09:25:25 by vsereno           #+#    #+#             */
/*   Updated: 2026/08/05 13:00:29 by vsereno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char	*str)
{
	int	indexs;
	int	i;

	indexs = 0;
	while (str[indexs])
	{
		if (str[indexs] == '+' || str[indexs] == '-')
			return (0);
		i = indexs + 1;
		while (str[i])
		{
			if (str[indexs] == str[i])
				return (0);
			i++;
		}
		indexs++;
	}
	if (indexs <= 1)
		return (0);
	return (1);
}
void	ft_putnbr_base(int nbr, char *base)
{
	int	digit;
	int	c;
	if (!base || !check_base(base))
		return ;
	digit = 0;
	while (base[digit])
		digit++;
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / digit, base);
		c = (nbr % digit);
		c = -c;
		write(1, &base[c], 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= digit)
		ft_putnbr_base(nbr / digit, base);
	c = (nbr % digit);
	write(1, &base[c], 1);
}

/*int main(void)
{
	int n = -2147483648;
	char	*base = "02145864971";
	ft_putnbr_base(n, base);
	write(1, "\n", 1);
}*/
