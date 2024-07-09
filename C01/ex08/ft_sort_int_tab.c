/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:50:23 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/12 14:58:30 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	count;

	i = 0;
	while (i < size - 1)
	{
		count = i + 1;
		while (count < size)
		{
			if (tab[count] < tab[i])
			{
				temp = tab[i];
				tab[i] = tab[count];
				tab[count] = temp;
			}
			else
				count++;
		}
		i++;
	}
}
#include <stdio.h>
int main(void)
{	
	int tab[7] = {4, 6, 8, 5, 8, 2, 1};
	int size = 7;
	ft_sort_int_tab(tab, size);
	
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	return 0;
}
