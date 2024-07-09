/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:17:00 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 10:48:22 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int     ft_strlen(char* str)
{
        int     length;

        length = 0;
        while (str[length])
        {
                length++;
        }
        return (length);
}

int	main(int argc, char*argv[])
{
	if (argc < 2)
	{
		write(1 ,"\n", 1);
	}
	else
	{	
		write (1, argv[argc-1], ft_strlen(argv[argc-1]));
	}	
	return 0;
}
