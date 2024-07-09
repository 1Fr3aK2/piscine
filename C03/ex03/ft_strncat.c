/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:52:45 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/03 16:42:08 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0' && (s < nb))
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
/*#include <stdio.h>
int   main(void)
{
    char        str1[20] = "Hello, ";
    char	 str2[] = "world!";
    unsigned int 	nb;
    
    nb = 3;
    ft_strncat(str1, str2, nb);
    printf("Concatenated string: %s\n", str1);
}*/
