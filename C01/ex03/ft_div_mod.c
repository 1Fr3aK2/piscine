/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:11:35 by raamorim          #+#    #+#             */
/*   Updated: 2024/01/29 17:15:06 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}

/*int 	main(void)
{
	int	a;
	int	b;
	int	mod;
	int	div;

	a = 42;
	b = 10;
	
	
	ft_div_mod(a, b, &div, &mod);
	if(mod == 2 && div == 4)
	{
		write(1, "ok", 2);
		
	}
	return(0);
}*/
