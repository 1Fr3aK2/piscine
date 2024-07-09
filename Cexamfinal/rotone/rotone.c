/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:58:03 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/15 14:01:28 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char*str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
		{
			str[i] += 1;
		}
		else if ((str[i] == 'z') || (str[i] == 'Z'))
		{
			str[i] -= 25;
		}
		write(1, &str[i], 1);
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
		rotone(argv[1]);
	}
}

