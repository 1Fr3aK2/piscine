/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:05:51 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/13 12:11:13 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	long	result;

	result = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (result * result < nb)
	{
		result++;
	}
	if (result * result == nb)
	{
		return (result);
	}
	return (0);
}
/*
#include <stdio.h>
int main ()
{
	int	nb;
	int	result;


	nb = 2147483647;
	result = ft_sqrt(nb);
	printf("%d", result);
	return 0;
}*/
