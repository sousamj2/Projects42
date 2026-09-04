/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisous <marisous@student.42lisb...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 09:29:56 by marisous          #+#    #+#             */
/*   Updated: 2026/09/03 20:38:54 by marisous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_H
# define FT_H

# define BUFFER_SIZE 1024
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>

char	ft_getchar(int fd, int *bytes_read);
void	ft_putchar(char c, int fd);
void	ft_putstr(char *str, int size);
void	ft_puterr(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_swap(int *a, int *b);
int		ft_strlen(char *str);
int		ft_getstr(int fd, char *string, int buffer_size);
char	*ft_parse(int argc, char *argv[], char *parse);
int		ft_atoi(char *str);
#endif
