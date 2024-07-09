/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:04:15 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/06 11:51:27 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
	{
		return (nb * (ft_recursive_power(nb, power - 1)));
	}
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	return (result);
}

/*#include <stdio.h>

int main()
{
	int	power;
	int	nb;
	int	result;

	nb = 4;
	power = 2;
	result = ft_recursive_power(nb, power);
	printf("%d", result);
	return 0;
}*/
