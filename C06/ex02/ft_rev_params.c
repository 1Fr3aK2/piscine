/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:26:10 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/07 10:01:09 by raamorim         ###   ########.fr       */
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
	int	i;

	i = argc - 1;
	if (argc < 2)
	{
		return (0);
	}
	while (i >= 1)
	{
		write (1, argv[i], ft_strlen(argv[i]));
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
