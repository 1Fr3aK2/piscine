/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:02:10 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/12 18:19:58 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_is_prime(int nb)
{
	long	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

/*#include <stdio.h>
int main()
{
	printf("%d", ft_find_next_prime(4));
}*/
