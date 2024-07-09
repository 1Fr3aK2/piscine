/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:25:42 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 10:33:08 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char*str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

int	main(int argc, char*argv[])
{
	if (argc < 2)
	{
		write (1, "\n", 1);
	}
	else 
	{
		write (1, argv[1], ft_strlen(argv[1]));
		write (1, "\n", 1);
	}
	return (0);
}
