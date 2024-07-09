/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:50:39 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 19:53:53 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char*s1, char*s2)
{
	int	i;

	i = 0;
	while((s1[i] || s2[i]) && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int main()
{
	char	s1[] = "hellO";
	char	s2[] = "hello";
	printf("%d", ft_strcmp(s1, s2));
	return 0;
}
