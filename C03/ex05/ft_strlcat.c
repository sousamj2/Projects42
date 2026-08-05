/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 09:49:18 by marisous          #+#    #+#             */
/*   Updated: 2026/08/04 11:34:52 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
void			iterate_strings(char **dest, char **src, int option);
void			iterate_pointers(unsigned int *index,
					unsigned int *retval, int option);

int	ft_strlen(char *str)
{
	char	*index_char;
	int		count_chars;

	index_char = str;
	count_chars = 0;
	while (*index_char > 0)
	{
		count_chars++;
		index_char++;
	}
	return (count_chars);
}

void	iterate_pointers(unsigned int *index, unsigned int *retval, int option)
{
	if (!option)
	{
		(*index)++;
		(*retval)++;
	}
	else
		(*index)++;
}

void	iterate_strings(char **dest, char **src, int option)
{
	if (!option)
		(*dest)++;
	else
	{
		(*dest)++;
		(*src)++;
	}
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	retval;

	index = 0;
	retval = ft_strlen(src);
	while (*dest != '\0')
	{
		if (index == size)
			return (retval);
		iterate_pointers(&index, &retval, 0);
		iterate_strings(&dest, &src, 0);
	}
	while (*src != '\0')
	{
		if (index +1 < size)
			*dest = *src;
		else
		{
			*dest = '\0';
			break ;
		}
		iterate_strings(&dest, &src, 1);
		iterate_pointers(&index, &retval, 1);
	}
	return (retval);
}

/*
#include <stdio.h>
#include <string.h>
#include <bsd/bsd.h>
// requires additional flag: -lbsd in order to work 
int	main(void)
{
	char	src_1[] = "yyyy";
	char	dest_1[2] = "x";
	unsigned int n;
	unsigned int src_size;
	n=2;

	printf("src  is [%s]\n",src_1);
	src_size = strlcat(dest_1,src_1,n);
	printf("dest is [%s]\n",dest_1);
	printf("src size is [%d] (strlcat)\n\n",src_size);

	char	*src_2 = "yyyy";
	char	dest_2[2] = "x";
	printf("src  is [%s]\n",src_2);
	src_size = ft_strlcat(dest_2,src_2,n);
	printf("dest is [%s]\n",dest_2);
	printf("src size is [%d] (mine)\n",src_size);

	return (0);
}
//*/
