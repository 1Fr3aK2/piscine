/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:00:30 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 19:09:17 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{	
	int	counter;
	int	number;

	counter = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	while (*str == '-' || *str == '+')
	{
		if(*str == '-')
			counter++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	if (counter % 2 == 0)
		return (number);
	return (-number);
}

#include <stdio.h>
int	main(void)
{
	char	x[] = " \t  \n  ---+--+1234ab567";

	printf("value of ft_atoi is : %d", ft_atoi(x));
	return (0);
}


