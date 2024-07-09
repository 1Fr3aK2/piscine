/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:38:21 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 13:44:53 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, &str, 1);
		str++;
	}
}

#include <stdio.h>
int main()
{
	char *str; 
	
	str = "asbdsd";
	ft_putstr(str);
	return 0;
}
