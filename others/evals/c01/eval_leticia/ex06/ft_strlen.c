/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvieira <lvieira@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:59:31 by lvieira           #+#    #+#             */
/*   Updated: 2026/08/08 10:41:27 by lvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL || str[0] == '\0')
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*void	putnbr(int n)
{
	char	c;

	if (n >= 10)
	{
		putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int     main(void)
{
	char	*str;

	str = "";
	putnbr(ft_strlen(str));
	return (0);
}*/

// apenas para resultado de i>0 e i<=9
/*int	main(void)
{
	char	*str;
	char	c;

	str = "bananas";
	c = (ft_strlen(str)) + '0';
	write(1, &c, 1);
	return (0);
}*/
