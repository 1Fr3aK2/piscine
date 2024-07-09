/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchandreplace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:11:48 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/02 12:20:23 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[])
{	
	int	i;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return 0;
	}
	
	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write (1, "\n", 1);
		return 0;
	}

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == argv[2][0])
		{
			argv[1][i] = argv[3][0];
		}
		write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return 0;
}



