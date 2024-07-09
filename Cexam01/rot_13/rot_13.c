/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:08:37 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/02 12:34:26 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
void    rot_13(char *str)
{
	int     i;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] += 13;
		}
		else if ((str[i] >= 'N' && str[i] <= 'Z') || ( str[i] >= 'n' && str[i] <= 'z'))
		{
			str[i] -= 13;
		}
		write (1, &str[i], 1);
		i++;
	}
}int     main(int argc, char* argv[])
{
	if(argc != 2)
	{
		write(1 , "\n", 1);
	}
	else
	{
		rot_13(argv[1]);
	}
}
