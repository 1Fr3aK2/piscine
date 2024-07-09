/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:19:25 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/15 09:47:24 by raamorim         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (copy == NULL)
		return (NULL);
	while (*src)
		copy[i++] = *src++;
	copy[i] = '\0';
	return (copy);
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *src = "Hello, world!";
    char *copy = ft_strdup(src);

    if (copy == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Original string: %s\n", src);
    printf("Copied string: %s\n", copy);

    // Free the allocated memory
    free(copy);
    return 0;
}
