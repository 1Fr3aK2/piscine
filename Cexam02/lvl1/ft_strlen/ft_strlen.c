/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:57:37 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 13:02:54 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while(str[length])
	{
		length++;
	}
	return (length);
}

#include <stdio.h>

int main()
{
	char str[] = " okasjdbaisudas d";

	ft_strlen(str);
	printf("%d", ft_strlen(str));
}

