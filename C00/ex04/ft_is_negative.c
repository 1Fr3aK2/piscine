/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:47:01 by raamorim          #+#    #+#             */
/*   Updated: 2024/01/27 16:39:33 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ft_is_negative;
	char	ft_is_positive;

	ft_is_positive = 'P';
	ft_is_negative = 'N';
	if (n >= 0)
	{
		write(1, &ft_is_positive, 1);
	}
	else
	{
		write(1, &ft_is_negative, 1);
	}
}
/*int main(void)
{
	ft_is_negative (5);
	ft_is_negative (0);
	ft_is_negative (-3);
	return 0;
}*/	
