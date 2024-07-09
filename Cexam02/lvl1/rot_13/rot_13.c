/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:25:30 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 15:36:38 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char* str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if ((str[i] >=  'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] += 13;
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] -= 13;
		}
		write (1, &str[i], 1);
		i++;
	}
}

int main(int argc, char*argv[])
{
	if (argc != 2)
	{
		write (1, "\n", 1);
	}
	else
	{
		rot_13(argv[1]);
	}
	return 0;
}
