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

#include <stdlib.h>

char	**ft_split(char *str, char *charset);
void	ft_get_num_strings(char *str, char charset, int *params);
char	*ft_simplify(char *str, char *charset);
int		ft_strlen(char *str);
char	*ft_get_next(char *str, char c, int *params);

/*
#define MAIN
#ifdef MAIN
#include <stdio.h>
int	main(void)
{
	char	*str = ",.another word. next, fim...test";
	char	*charset = ".,";
	char	**result;
	char	*istring;
	result = ft_split(str, charset);
	while (1)
	{
		istring = *result;
		if (istring == NULL)
			break ;
		printf("Size of string [%s] is [%d]\n",istring, ft_strlen(istring));
		result++;
	}
}
#endif
//*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (! str)
		return (0);
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_simplify(char *str, char *charset)
{
	char	*begset;
	char	*simple;
	int		size;

	size = ft_strlen(str);
	if (!size)
		return ("\0");
	simple = malloc((1 + size) * sizeof(char));
	if (!simple)
		return ("\0");
	while (*str != '\0')
	{
		begset = charset;
		*simple = *str;
		while (*begset != '\0')
		{
			if (*str == *begset)
				*simple = *charset;
			begset++;
		}
		str++;
		simple++;
		*simple = '\0';
	}
	return (simple - size);
}

/**
   params is a array of ints:
   params[0] = index of the string up to nstrings.
   params[1] = index of the char in the string up to strlen.
   params[2] = current position of the cursor in the simplified string.
   params[3] = size of a given word in the simplified string.
   params[4] = total number of strings.
 */
void	ft_get_num_strings(char *str, char c, int *params)
{
	int	is_new_word;

	params[4] = 1;
	is_new_word = 0;
	if (!str || *str == '\0')
		return ;
	while (*str != '\0')
	{
		if (!is_new_word && *str != c)
		{
			is_new_word = 1;
			params[4]++;
		}
		else if (is_new_word && *str == c)
			is_new_word = 0;
		str++;
	}
}

/**
   params is a array of ints:
   params[0] = index of the string up to nstrings.
   params[1] = index of the char in the string up to strlen.
   params[2] = current position of the cursor in the simplified string.
   params[3] = size of a given word in the simplified string.
   params[4] = total number of strings.
 */
char	**ft_split(char *str, char *charset)
{
	char	**retval;
	char	*simple;
	int		params[5];
	int		it;

	it = 0;
	while (it < 5)
	{
		params[it] = 0;
		it++;
	}
	simple = ft_simplify(str, charset);
	ft_get_num_strings(simple, charset[0], params);
	retval = malloc(params[4] * sizeof (char *));
	if (!retval)
		return (NULL);
	while (params[0] < params[4])
	{
		params[3] = 0;
		params[1] = 0;
		retval[params[0]] = ft_get_next(simple + params[2], charset[0], params);
		params[0]++;
	}
	return (retval);
}

/**
   params is a array of ints:
   params[0] = index of the string up to nstrings.
   params[1] = index of the char in the string up to strlen.
   params[2] = current position of the cursor in the simplified string.
   params[3] = size of a given word in the simplified string.
   params[4] = total number of strings.
 */
char	*ft_get_next(char *str, char c, int *params)
{
	char	*this_word;

	while (*str != '\0')
	{
		if (params[3] && *str == c)
			break ;
		if (*str != c)
			params[3]++;
		str++;
		params[2]++;
	}
	if (! params[3])
		return (NULL);
	this_word = malloc((params[3] + 1) * sizeof(char));
	if (! this_word)
		return (NULL);
	str -= params[3];
	while (params[1] < params[3])
	{
		this_word[params[1]] = *str;
		params[1]++;
		str++;
	}
	this_word[params[1]] = '\0';
	return (this_word);
}
