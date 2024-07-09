/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:56:08 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 17:04:08 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char*str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z') 
		{
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int argc, char*argv[])
{
	if(argc != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		ulstr(argv[1]);
	}
	return (0);
}
