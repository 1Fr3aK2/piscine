/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:34:17 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/13 12:10:45 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1) 
	{
		return (1);
	}
	else
	{
		return ((ft_fibonacci(index - 1) + ft_fibonacci(index - 2)));
	}
}

/*#include <stdio.h>
int main()
{
	int	result;
	int	index;
	
	index = 10101010101010101010 = ft_fibonacci(index);
	printf("%d", result);
	return 0;
}*/
