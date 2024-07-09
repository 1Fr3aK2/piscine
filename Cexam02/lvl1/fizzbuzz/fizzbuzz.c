/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:08:23 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 16:55:37 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char*str)
{
	int	length;

	length = 0;
	while(str[length])
	{
		length++;
	}
	return (length);
}


void printnumbers(int n)
{

	n = 1;
	while (n <= 100)
	{
		write(1, &number, ft_strlen(n));
		n--;
	}
}
int     main(void)
{
        int     n;

        n = 1;
        while (n <= 100)
        {
                if(n % 3 == 0)
                {
                        write(1, "fizz", 4);
                }
                else if( n % 5 == 0)
                {
                        write(1, "buzz", 4);
                }
                else if(n % 3 == 0 && n % 5 == 0)
                {
                        write(1, "fizzbuzz", 8);
                }
                else
                {
                        printnumbers(n);
                }
        }
}
-- INSERT --                                                              41,2          Bot


