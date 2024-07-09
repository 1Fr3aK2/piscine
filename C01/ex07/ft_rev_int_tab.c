/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:11:39 by raamorim          #+#    #+#             */
/*   Updated: 2024/01/29 17:18:07 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab [size - 1 - i] = temp; 
		i++;
	}
}

/*int main()
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	size = 5;

	ft_rev_int_tab(tab, size);
	if(tab[0] == 5 && tab[1] == 4 && tab[2] == 3 && tab[3] == 2 && tab[4] == 1)
		write(1, "ok", 2);
	else
		write(1, "wrong", 5);
	return (0);
}*/
