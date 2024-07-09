/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:23:26 by raamorim          #+#    #+#             */
/*   Updated: 2024/01/30 19:16:19 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! ((str[i] >= 65 && str[i] <= 90)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main(void)
{
	printf("%d", ft_str_is_uppercase("kop"));
}*/
