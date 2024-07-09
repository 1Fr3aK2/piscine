/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:19:12 by raamorim          #+#    #+#             */
/*   Updated: 2024/01/30 21:41:48 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*str_lowercase(char *str )
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	verify;

	i = 0;
	verify = 0;
	str_lowercase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))
		{
			if (str[i] >= 97 && str[i] <= 122 && !verify)
			{
				str[i] -= 32;
				verify = 1;
			}
			else
				verify = 1;
		}
		else
			verify = 0;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main()
{
    char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    char str1[] = "sfovij?kl43lo+dd-sdk%cdj*dc$sdc";

    printf("%s\n", ft_strcapitalize(str_lowercase(str)));
    printf("%s\n", ft_strcapitalize(str_lowercase(str1)));

    return 0;
}*/
