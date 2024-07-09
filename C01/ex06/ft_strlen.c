/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:59:09 by raamorim          #+#    #+#             */
/*   Updated: 2024/01/29 16:10:15 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
/*int main(void)
{
	char*	str;
	
	str = "hello World";
	ft_strlen(str);
	if (ft_strlen(str) == 10)
	{
		write (1, "ok", 2);
	}
	else
	{
		write(1, "not ok", 6);
	}
	return (0);
}*/
