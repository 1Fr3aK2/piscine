/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:43:14 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/13 19:11:26 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'z' - str[i] - 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'Z' - str[i] - 'A';
		}
		else
		{
			write(1, &str[i], 1);
		}
		
	}
	write(1, &str[i], 1);
	write(1, "\n", 1);
	i++;

}


int main(int argc, char*argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		alpha_mirror(argv[1]);
	}
}
