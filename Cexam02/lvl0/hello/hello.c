/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:13:50 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 11:24:27 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char*str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return(length);
}

int main()
{
	
	char str[] = "Hello World!";
	write(1, &str, ft_strlen(str));
	write(1, "\n", 1);
}
