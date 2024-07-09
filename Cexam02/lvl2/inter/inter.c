/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:08:16 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/11 15:25:58 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_double(char*str, char c , int pos)
{
	int	i;

	i = 0;
	while(i < pos)
	{
		if(str[i] == c)
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
	j = 0;
	while (str1[i])
	{
		j = 0;
		while(str2[j])
		{
			if(str1[i] == str2[j])
			{
				if(check_double(str1, str1[i], i) == 1)
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

