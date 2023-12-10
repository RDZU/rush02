/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:54:36 by jruf              #+#    #+#             */
/*   Updated: 2023/11/26 22:12:15 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "header.h"

void	*ft_strstr(char *str, char *to_find);
void	ft_putchar(char c);
void	*ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcpy(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*get_last_char(char *number);
int		process_file(char *number,char *file, int size);
int		ft_str_is_numeric(char *str);

#endif
