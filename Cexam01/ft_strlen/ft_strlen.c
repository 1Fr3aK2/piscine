/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 09:32:24 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/02 09:35:18 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while(str[length]  != '\0')
	{
		length++;
	}
	return (length);
}

