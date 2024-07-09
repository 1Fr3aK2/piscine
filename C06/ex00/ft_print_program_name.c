/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:22:48 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/07 10:07:01 by raamorim         ###   ########.fr       */
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
	int	length;

	argc++;
	length = ft_strlen(argv[0]);
	write(1, argv[0], length);
	write(1, "\n", 1);
	return (0);
}
