/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:19:30 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/03 11:06:25 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char	s1[] = "hellO";
	char	s2[] = "hello";
	int	result = ft_strcmp(s1, s2);
	printf("%d", result);
}*/
