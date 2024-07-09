/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:15:09 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/15 14:24:24 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char*str)
{
	int	len;

	len = 0;
	while(str[len])
	{
		len++;
	}
	return (len);
}

void	rev_print(char*str)
{
	int	len;

	len = ft_strlen(str);
	while(len--)
	{
		write(1, &str[len], 1);
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
		rev_print(argv[1]);
	}
}

