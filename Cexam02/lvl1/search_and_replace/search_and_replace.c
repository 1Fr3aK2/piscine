/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:40:11 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 17:48:59 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char*argv[])
{
        int     i;

        i = 0;
        if(argc != 4)
        {
                write(1, "\n", 1);
                return 0;
        }
        if (argv[2][1] != '\0' && argv[3][1] != '\0')
        {
                write(1, "\n", 1);
                return 0;
        }
        while (argv[1][i] != '\0')
        {
                if(argv[1][i] == argv[2][0])
                {
                        argv[1][i] = argv[3][0];
                }
                write(1, &argv[1][i], 1);
                i++;
        }
        write(1, "\n", 1);
        return (0);
}

