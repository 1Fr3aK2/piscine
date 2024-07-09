/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:15:53 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/15 12:18:08 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char*str)
{
	int	len;

	len = 0;
	while(str[len])
	{
		len++;
	}
	return(len);
}

int main()
{
	char c[] = "labsfa";
	printf("%d", ft_strlen(c));
}
