/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:51:44 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/05 10:45:22 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*#include <stdio.h>
int main(void)
{
	int	nb = 4;
	int 	factorial;

	factorial = ft_iterative_factorial(nb);
	printf("%d", factorial);
	
	return (0);
}*/
