/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:54:10 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/03 11:08:21 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n || (s1[i] == '\0' && s2[i] == '\0'))
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
#include <string.h>
int main (void)
{
	unsigned int	n = 10;
	char	s1[] =  "hellO";
	char	s2[] =  "hello";
	int	result = ft_strncmp(s1, s2, n);
	
	printf("%d", result);
}*/	
