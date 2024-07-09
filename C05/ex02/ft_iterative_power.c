/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:40:46 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/05 13:25:03 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*#include <stdio.h>
int main()
{
	int	result;
	int	nb;
	int	power;
	
	nb = 0;
	power = 0;
	result = ft_iterative_power(nb, power);
	printf("%d", result);
	return 0;
}*/
