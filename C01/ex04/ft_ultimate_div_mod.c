/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:55:16 by raamorim          #+#    #+#             */
/*   Updated: 2024/01/29 14:01:57 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	mod = *a % *b;
	div = *a / *b;
	*b = mod;
	*a = div;
}

/*int main()
{
	int	a;
	int	b;

	a = 42;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	if(a == 4 && b == 2)
	{
		write(1, "ok", 2);
	}
	else
	{
		write(1, "not ok", 6);
	}
	return (0);
}*/
