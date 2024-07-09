/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 09:39:28 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/04 16:50:10 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

int main ()
{
	char	str[] = "Hello, world !\n";
	ft_putstr(str);
	return (0);
}
