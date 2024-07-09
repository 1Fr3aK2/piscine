/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:56:48 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/06 10:15:03 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char*str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

int	main(int argc, char*argv[])
{
	int	index;

	index = 1;
	while (index < argc)
	{
		write (1, argv[index], ft_strlen(argv[index]));
		write (1, "\n", 1);
		index++;
	}
	return (0);
}
