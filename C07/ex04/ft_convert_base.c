/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 13:58:17 by marisous          #+#    #+#             */
/*   Updated: 2026/08/10 13:58:26 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_base_number(char *base);
char	*ft_signcheck(char *str, int *signal);
void	ft_get_string(int nb, int *params, char *base, char *snumber);
int		ft_get_power_max(long *nb, int base_n, int *limit);
int		ft_digit(char *c, char *base);
int		ft_atoi_base(char *str, char *base);
char	*ft_putnbr_base(long nb, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	number;
	char	*snumber;

	if (!ft_get_base_number(base_from) || !ft_get_base_number(base_to))
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	snumber = ft_putnbr_base(number, base_to);
	return (snumber);
}

int	ft_atoi_base(char *str, char *base)
{
	long long	value;
	int			signal;
	int			digit;
	int			base_n;

	value = 0;
	while ((*str == ' ' || *str == '\f' || *str == '\n'
			|| *str == '\r' || *str == '\t' || *str == '\v'))
		str++;
	str = ft_signcheck(str, &signal);
	base_n = ft_get_base_number(base);
	if (! base_n)
		return (0);
	while (*str != '\0')
	{
		digit = ft_digit(str, base);
		if (digit < 0)
			break ;
		value *= base_n;
		value += digit;
		str++;
	}
	return ((int)(signal * value));
}

void	ft_putnbr_base(long nb, char *base)
{
	int		params [3];
	char	*snumber;

	nb_l = (long) nb;
	params[0] = ft_get_base_number(nb, base, 1);
	if (!params[0])
		return ;
	params[2] = ft_get_power_max(&nb, params[0], &params[1]);
	ft_get_string(nb, params, base, snumber);
	snumber = malloc(params[1] + params[2] + 1);
	if (params[1])
	{
		snumber[0] = '-';
		snumber++;
	}
	while (*snumber != '\0')
	{
		write(1, snumber, 1);
		snumber++;
	}
}
