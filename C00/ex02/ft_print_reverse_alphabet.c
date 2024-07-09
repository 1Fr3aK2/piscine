/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:57:15 by raamorim          #+#    #+#             */
/*   Updated: 2024/01/27 16:34:12 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter != 'a' - 1)
	{
		write (1, &letter, 1);
		letter--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}*/
