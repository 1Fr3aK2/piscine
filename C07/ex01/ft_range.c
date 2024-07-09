/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:20:24 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/15 09:49:09 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	j;
	int	range;
	int	*result;

	j = 0;
	range = max - min;
	if (min >= max)
		return (NULL);
	result = (int *)malloc(range * sizeof(int));
	if (result == NULL)
		return (NULL);
	while (j < range)
	{
		result[j] = min + j;
		j++;
	}
	return (result);
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int min = 5;
    int max = 10;
    int *range = ft_range(min, max);

    if (range == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Range: ");
    for (int i = 0; i < max - min; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(range);
    return 0;
}
