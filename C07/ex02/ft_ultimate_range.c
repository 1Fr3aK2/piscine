/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:21:12 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/15 09:49:42 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(diff * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < diff)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (diff);
}

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main() {
    int min = 5;
    int max = 10;
    int *range = NULL;
    int diff = ft_ultimate_range(&range, min, max);

    if (diff == -1) {
        printf("Memory allocation failed.\n");
        return 1;
    } else if (diff == 0) {
        printf("Empty range.\n");
    } else {
        printf("Number of elements in the range: %d\n", diff);
    }

    // Free the allocated memory
    free(range);
    return 0;
}
