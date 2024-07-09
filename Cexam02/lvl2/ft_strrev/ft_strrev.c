/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:47:48 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/13 18:40:46 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while(str[length])
	{
		length++;
	}
	return(length);
}

char	*ft_strrev(char *str)
{
	int	i;
	char	temp;
	int	length;
	

	i = 0;
	length = ft_strlen(str) - 1;
	while (i < length)
	{
		temp = str[i];
		str[i] = str[length];
		str[length] = temp;
		i++;
		length--;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char c[] = "hwlow world";
	printf("%s", ft_strrev(c));
}
