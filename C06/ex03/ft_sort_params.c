/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:48:30 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/12 16:54:26 by raamorim         ###   ########.fr       */
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

int	ft_strcmp(char*str, char*str1)
{
	int		i;

	i = 0;
	while (str[i] == str1[i] && (str[i] != '\0' || (str1[i] != '\0')))
	{
		i++;
	}
	return (str[i] - str1[i]);
}

void	ft_swap(char**a, char**b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char*argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write (1, "\n", 1);
		i++;
	}
}
