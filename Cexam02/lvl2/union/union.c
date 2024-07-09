/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:43:16 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/14 12:29:15 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_double1(char*str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}


void	union_1(char*str, char*str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(str[i])
	{
		if (check_double1(str, str[i], i) == 1)
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	while (str2[j])
	{
		if ((check_double1(str, str2[j], j) == 1) && (check_double1(str2, str2[j], j) == 1))
		{
			write(1, &str2[j], 1);
		}
		j++;
	}
}

int main(int argc, char*argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
	}
	else
	{
		union_1(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	return (0);
}



