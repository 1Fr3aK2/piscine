/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:47:49 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/05 11:39:41 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else 
	{
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
}

/*#include <stdio.h>
int main()
{
	int factorial;
	int nb;

	nb = 4;
	factorial = ft_recursive_factorial(nb);
	printf("%d", factorial);
	return (0);
}*/
