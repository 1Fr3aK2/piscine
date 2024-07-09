/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:26:43 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/15 12:30:47 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char*str)
{
	int	i;
	int	counter;

	i = 0;
	while(str[i])
	{
		counter = 1;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			counter += str[i] - 'a';
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			counter += str[i] - 'A';
		}
		while (counter > 0)
		{
			write(1, &str[i], 1);
			counter--;
		}
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char*argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		repeat_alpha(argv[1]);
	}
}
