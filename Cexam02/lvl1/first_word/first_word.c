/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:38:03 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 15:56:57 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char*str)
{
	int	i;

	i = 0;
	while ((str[i] == 32) || (str[i] == 9))
	{
		i++;
	}
	while ((str[i] != 32) && (str[i] != 9))
	{
		write(1, &str[i], 1);
		i++;
	}
	
}


int main(int argc, char*argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		first_word(argv[1]);
	}
	return (0);
}
