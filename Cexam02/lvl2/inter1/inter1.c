/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:21:06 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/13 19:40:55 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	check_double(char c, char*str, int pos)
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



void	inter(char*str1, char*str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i])
	{
		j = 0;
		while(str2[j])
		{
			if (str1[i] == str2[j])
			{
				if (check_double(str1[i], str1, i) == 1)
				{
					write(1, &str1[i], 1);
				}
				break;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}


int main(int argc, char*argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
	}
	else
	{
		inter(argv[1], argv[2]);
	}
}
					
