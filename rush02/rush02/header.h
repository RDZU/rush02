
#ifndef HEADER_H
#define HEADER_H
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h> 
#include <stdlib.h>
#include "header.h"
void    *ft_strstr(char *str, char *to_find);
void	ft_putchar(char c);
void	*ft_putstr(char *str);
int     ft_strlen(char *str);
int     ft_strcpy(char *s1, char *s2);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strcat(char *dest, char *src);
char    *ft_strncpy(char *dest, char *src, unsigned int n);
char    *get_last_char(char *number);

#endif


