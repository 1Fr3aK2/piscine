/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:24:43 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/08 19:33:34 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char*str)
{
	int	length;

	length = 0;
	while(str[length])
	{
		length++;
	}
	return (length);
}




void	last_word(char*str)
{
	
	while (str[i])
	{
		if ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
			i++;











int main(int argc, char*arv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	else 
	{
		last_word(argv[1]);
	}
	return (0);
}
