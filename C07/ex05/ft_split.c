/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 13:59:02 by marisous          #+#    #+#             */
/*   Updated: 2026/08/10 13:59:04 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	**ft_split(char *str, char *charset);
int		ft_get_num_strings(char *str, char charset);
char	*ft_simplify(char *str, char *charset);
int		ft_strlen(char *str);
char	*ft_get_next(char *str, char c, int *pos);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_simplify(char *str, char *charset)
{
	char *begset;
	char *simple;
	int size;

	size = ft_strlen(str);
	simple = malloc((1+size)*sizeof(char));
	while (*str != '\0')
	{
		begset = charset;
		*simple = *str;
		while (*begset != '\0')
		{
			if (*str == *begset)
			{
				*simple = *charset;
				break;
			}
			begset++;
		}
		str++;
		simple++;
		*simple = '\0';
	}
	return (simple - size);	
}

int		ft_get_num_strings(char *str, char c)
{
	int nstrings;
	int is_new_word;
	
	nstrings = 1;
	is_new_word = 0;
	while (*str != '\0')
	{
		if (!is_new_word && *str != c)
		{
			is_new_word = 1;
			nstrings++;
		}
		else if (is_new_word && *str == c)
			is_new_word = 0;
		str++;
	}
	return (nstrings);
}

int main(void)
{
	char *str = ",.another word. next, fim...";
	char *charset = ".,";

	char ** result = ft_split(str,charset);

	char * istring;

	istring = *result;
	while (istring != NULL)
	{
		printf("Size of string [%s] is [%d]\n",istring, ft_strlen(istring));
		(*istring)++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char **retval;
	char *simple;
	int index;
	int nstrings;
	int pos;

	pos = 0;
	simple = ft_simplify(str, charset);
	printf("[%s]\n", simple);
	nstrings = ft_get_num_strings(simple, charset[0]);
	printf(" and has [%d] words.\n", nstrings);
	retval = malloc(nstrings * sizeof (char *));
	index = 0;
	while (index < nstrings)
	{
		printf("Pos is [%d]\n",pos);
		retval[index] = ft_get_next(simple, charset[0], &pos);
		printf("[%s]\n",retval[index]);
		index++;
	}
	return (retval);
}

char * ft_get_next(char *str, char c, int *pos)
{
	int size_word;
	int index;
	char * this_word;

	size_word = 0;
	index = 0;
	str += *pos;
	while(*str != '\0')
	{
		if (size_word && *str == c)
			break ;
		if (*str != c)
			size_word++;
		str++;
		(*pos)++;
	}
	if (*str == '\0')
	{
		this_word = NULL;
		return (str);
	}
	printf("size of word = [%d]\n", size_word);

	this_word = malloc((size_word +1)*sizeof(char));
	str -= size_word;

	while (index < size_word)
	{
		this_word[index] = *str;
		index++;
		str++;
	}
	this_word[index] = '\0';
		printf("this word = [%s]\n", this_word);
	return (this_word);
}
