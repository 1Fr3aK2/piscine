/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:19:36 by raamorim          #+#    #+#             */
/*   Updated: 2024/01/30 22:40:32 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <strings.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! ((str[i] >= 48 && str[i] <= 57)))
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
	printf("%d", ft_str_is_numeric("asd"));
}*/
