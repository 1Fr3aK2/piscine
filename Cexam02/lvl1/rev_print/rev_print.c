/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:45:56 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 14:45:35 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_strlen(char*str)
{
        int     length;

        length = 0;
        while (str[length])
        {
                length++;
        }
        return(length);
}


int main(int argc, char*argv[])
{	
		
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	else 
	{
		write (1,  , ft_strlen(argv[argc-1]));
	}
}
