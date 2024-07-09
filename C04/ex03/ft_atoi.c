/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:14:45 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 18:51:43 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	parity;
	int	number;

	parity = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	if (parity % 2 == 0)
	{
		return (number);
	}
	return (-number);
}

#include <stdio.h>
int	main(void)
{
	char	x[] = " \t  \n  ----+--+1234ab567";

	printf("value of ft_atoi is : %d", ft_atoi(x));
	return (0);
}
