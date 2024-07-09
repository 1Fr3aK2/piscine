/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 10:53:34 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/10 10:54:25 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    interval_space(char*str)
{
        int     i;
        i = 0;
        while(str[i])
        {
                if ((str[i + 1]) != '\0')
                {
                        write(1, &str[i], 1);
                        write(1, "   ", 3);
                }
                else
                {
                        write(1 , &str[i], 1);
                }
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
                interval_space(argv[1]);
        }
}
