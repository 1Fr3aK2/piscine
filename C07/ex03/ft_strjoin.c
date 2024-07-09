/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:21:49 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/15 09:50:12 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

int	return_length(int size, char **strs, int size_sep)
{
	int	i;
	int	len;

	i = 0;
	len = size_sep * -1;
	while (i < size)
	{
		len += size_sep + ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*res;

	if (size == 0)
	{
		res = (char *)malloc(1);
		return (res);
	}
	len = return_length(size, strs, ft_strlen(sep));
	res = (char *)malloc(len + 1);
	res[0] = '\0';
	res[len] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcpy(res + ft_strlen(res), strs[i]);
		if (i < size - 1)
			ft_strcpy(res + ft_strlen(res), sep);
		i++;
	}
	return (res);
}

#include <stdio.h>

int main() {
    char *strs[] = {"Hello", "world", "this", "is", "a", "test"};
    char *sep = ", ";
    int size = sizeof(strs) / sizeof(strs[0]);

    char *result = ft_strjoin(size, strs, sep);
    printf("Result: %s\n", result);

    // Free the allocated memory
    free(result);

    return 0;
}
