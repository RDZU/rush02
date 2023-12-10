 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruf <jruf@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:54:20 by jruf              #+#    #+#             */
/*   Updated: 2023/11/26 20:18:48 by albperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i] && i < n)
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	c;
	int		len_src;
	int		len_to_find;

	i = 0;
	len_src = ft_strlen(str);
	len_to_find = ft_strlen(to_find);
	c = to_find[0];
	if (len_to_find > len_src)
		return (0);
	else if (len_to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			if (ft_strncmp(&str[i], to_find, len_to_find) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

char	*get_last_char(char *number) {
	int		i;
	int		len;
	char	*last;

	len = ft_strlen(number) - 1;
	i = 0;
	last = malloc(sizeof(char) * 2);
	if (last == NULL) {
	return (NULL);
	}
	while (number[i] != '\0') {
		if (i == len) {
			last[0] = number[i];
		}
		i++;
	}
	last[1] = '\0';
	return (last);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 1;
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			return (0);
		str++;
	}
	return (i);
}


