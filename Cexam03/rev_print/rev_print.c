/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:04:36 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/14 16:13:04 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char*str)
{
	int	length;

	length = 0;
	while(str[length])
	{
		length++;
	}
	return(length);
}

void	rev_print(char*str)
{
	int	len;

	len = ft_strlen(str);
	len--;
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--;
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

