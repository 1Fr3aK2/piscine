/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:39:45 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/15 14:07:11 by raamorim         ###   ########.fr       */
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
	while((str[i] != 32) && (str[i] != 9) && str[i])
	{
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
		first_word(argv[1]);
	}
}
