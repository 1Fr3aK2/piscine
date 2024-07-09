/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:31:11 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/15 11:44:26 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	atoi(const char*str)
{	
	int	num;
	int	counter;

	num = 0;
	counter = 0;

	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	while(*str == '-' || *str == '+')
	{	
		if (*str == '-')
		{
			counter = -1;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	return (num * counter);
}

#include <stdio.h>
int main()
{
	char c[] = "\t    \n -++--++-1315alsnd687";
	printf("%d", atoi(c));
}

