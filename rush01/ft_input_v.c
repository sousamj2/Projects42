/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_v.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 18:43:24 by marisous          #+#    #+#             */
/*   Updated: 2026/08/02 20:17:47 by leomiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_numbers(char *str)
{
	int	i;
	int	counter_numbers;

	i = 0;
	counter_numbers = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '4')
			counter_numbers++;
		i++;
	}
	return (counter_numbers);
}

int	ft_input_validation(char *arg)
{
	int		i;
	char	*c;

	c = arg;
	if (ft_count_numbers(arg) != 16)
		return (0);
	i = 0;
	while (*c != '\0')
	{
		if (i % 2 == 0 && !(*c >= '1' && *c <= '4'))
			return (0);
		else if (i % 2 != 0 && *c != ' ')
			return (0);
		i++;
		c++;
	}
	return (1);
}
