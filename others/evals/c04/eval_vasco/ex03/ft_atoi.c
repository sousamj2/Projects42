/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsereno <vsereno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 09:24:20 by vsereno           #+#    #+#             */
/*   Updated: 2026/08/05 12:43:25 by vsereno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i])
	{
		if(((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			&& (str[i - 1] == '-' || str[i - 1] == '+'))
			return (result);
		else if (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ' 
			|| str[i] == '+') && result == 0);
		else if (str[i] == '-' && result == 0)
			sign *= -1;
		else if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			return (result * sign);
		i++;
	}
	return (result * sign);
}

/*int	main(void)
{
	int	i =	ft_atoi(" --+--5089a236");
	printf("%d\n", i);
}*/
