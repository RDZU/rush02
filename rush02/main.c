/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razamora <razamora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:54:52 by jruf              #+#    #+#             */
/*   Updated: 2023/11/26 22:20:58 by razamora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

int	main(int argc, char **argv)
{

	int	size;

	if (argc == 2)
	{
		if (ft_str_is_numeric (argv[1]) == 1 && argv[1][0] != '-' )
		{
			size = ft_strlen(argv[1]);
			process_file(argv[1], "numbers.dict", size);
		}
		else
			write(1, "Dict Error\n", 11);
	}
	else if (argc == 3)
	{
		if (ft_str_is_numeric (argv[1]) == 1 && argv[1][0] != '-')
		{
			size = ft_strlen(argv[1]);
			process_file(argv[1], argv[2], size);
		}
	}
	else if (argc == 1 || argc > 3)
	{
		write(1, "Dict Error\n", 11);
	}
	return (0);
}
