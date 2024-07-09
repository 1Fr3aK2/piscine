/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:59:20 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/14 20:32:05 by raamorim         ###   ########.fr       */
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
	return (len);
}

char    *ft_strrev(char *str)
{
	int	i;
	char	temp;
	int	len;
	
	len = (ft_strlen(str) - 1);
	i = 0;
	while(i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
	write(1, "\n", 1);
}

int main()
{
	char str[] = " hello world";
	printf("%s", ft_strrev(str));
}
