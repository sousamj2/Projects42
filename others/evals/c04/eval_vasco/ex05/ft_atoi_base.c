/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsereno <vsereno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:53:21 by vsereno           #+#    #+#             */
/*   Updated: 2026/08/05 13:35:50 by vsereno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_get_base_index(char c, char *base1)
{
	int	j;

	j = 0;
	while (base1[j])
	{
		if (base1[j] == c)
			return(j);
		j++;
	}
	return (-1);
}

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
int	len(char *base2)
{
	int	i;

	i = 0;
	while (base2[i])
		i++;
	return (i);
}

int ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (!base || !check_base(base) || !str)
		return (0);
	while (str[i])
	{
		if(((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			&& (str[i - 1] == '-' || str[i - 1] == '+'))
			return (result);
		else if (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ' 
			|| str[i] == '+') && result == 0);
		else if (str[i] == '-' && result == 0)
			sign *= -1;
		else if (ft_get_base_index(str[i], base) >= 0)
			result = result * len(base) + ft_get_base_index(str[i], base);
		else
			return (result * sign);
		i++;
	}
	return (result * sign);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi("      -+-4b", "974521372621gijklm"));
}*/
