/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:59:33 by raamorim          #+#    #+#             */
/*   Updated: 2024/01/27 16:32:11 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter != 'z' + 1)
	{
		write (1, &letter, 1);
		letter++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return 0;
}*/
