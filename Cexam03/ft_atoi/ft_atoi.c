/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:07:27 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/14 14:13:31 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	number;
	int	counter;

	number = 0;
	counter = 0;
	while((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	while(*str == '+' || *str == '-')
	{
		if (*str == '-')
			counter++;
		str++;
	}
	while(*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str -48;
		str++;
	}
	if (counter % 2 == 0)
		return (number);
	return (-number);
}

#include <stdio.h>
int main()
{
	char c[] = "\t    \n  ----++---1234askhd456"; 
	printf("%d", ft_atoi(c));
}
