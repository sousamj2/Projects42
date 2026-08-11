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

#include <stdlib.h>

int		ft_get_base_number(char *base);
char	*ft_signcheck(char *str, int *signal);
void	ft_get_string(long nb, int *params, char *base, char *snumber);
int		ft_get_power_max(long *nb, int *params);
int		ft_digit(char *c, char *base);
int		ft_atoi_base(char *str, char *base);
char	*ft_putnbr_base(long nb, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

#include <stdio.h>
int main(int argn, char *argv[])
{
	char *nbr;
	char *base_from;
	char *base_to;
	char *converted;

	 nbr = "-2147483648";
	 base_from = "0123456789";
	 base_to = "0123456789abcdef";
	 /* base_from = "0123456789"; */
	 base_to = "01";
	 if (argn == 4)
	{
		nbr = argv[1];
		base_from = argv[2];
		base_to = argv[3];
	}
	converted = ft_convert_base(nbr, base_from, base_to);
	printf("Number [%s] with base [%s] converts to", nbr, base_from);
	printf(" base [%s] as the number [%s].\n", base_to, converted);
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	number;
	char	*snumber;

	if (!ft_get_base_number(base_from) || !ft_get_base_number(base_to))
		return (NULL);
	number = ft_atoi_base(nbr, base_from);
	//printf("Number is [%ld].\n", number);
	snumber = ft_putnbr_base(number, base_to);
	//printf("Snumber is [%s].\n", snumber);
	return (snumber);
}

/**
   params[0] is base_n how many chars does the base has.
   params[1] is negative: say if number is negative (1) or positive (0)
   params[2] is power: what is the value of the max base_n power not above nb
   params[3] is how many digits will the number have: include sign '-' and '\0'.
 */

char	*ft_putnbr_base(long nb, char *base)
{
	int		params [4];
	char	*snumber;
	char	*retval;	

	params[0] = ft_get_base_number(base);
	if (!params[0])
		return ("");
	ft_get_power_max(&nb, params);
	//printf("Params 0: %d, 1: %d, 2: %d, 3: %d\n", params[0], params[1], params[2], params[3]);
	snumber = malloc((params[3]) * sizeof(char));
	//printf("Size of snumber [%d] at position: [%p]\n",params[3] ,snumber);
	retval = snumber;
	if (params[2] == 0)
	{
		*snumber = base[0];
		*(snumber + 1) = '\0';
		return (retval);
	}
	ft_get_string(nb, params, base, snumber);
	return (retval);
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
