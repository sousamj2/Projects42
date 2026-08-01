/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 09:59:34 by marisous          #+#    #+#             */
/*   Updated: 2026/07/29 09:59:37 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	index;

	if (!str)
		return (-1);
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < ' ' || str[index] > '~')
			return (0);
		index++;
	}
	return (1);
}


/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	char * test_string = "Hello Sargedas!\0\t gnesoing \n"; */
/* 	printf("String [%s] is%sprintable only: function return (%d).\n", */
/* 		   test_string, ft_str_is_printable(test_string) ? " " : " not ", */
/* 		   ft_str_is_printable(test_string)); */
/* } */

/* #include <stdio.h> */
/* void	ft_print_ascii(); */
/* void	ft_print_ascii() */
/* { */
/* 	int i; */
/* 	i = 0; */

/* 	while (i < 255) */
/* 		{ */
/* 			if (i % 5 == 0) */
/* 				printf("\n"); */
/* 			printf("%d: [%c]\t",i,i); */

/* 	i++; */
/* 		} */
/* 	printf("\n"); */
/* } */
/* int	main(void) */
/* { */
/* 	ft_print_ascii(); */
/* } */
