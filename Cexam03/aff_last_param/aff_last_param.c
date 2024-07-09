/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raamorim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:34:26 by raamorim          #+#    #+#             */
/*   Updated: 2024/02/14 21:01:20 by raamorim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char*str)
{
	int len;

	len = 0;
	while(str[len])
	{
		len++;
	}
	return(len);
}

int main(int argc, char*argv[])
{
	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		write(1, argv[argc - 1], ft_strlen(argv[argc - 1]));
		write(1, "\n", 1);	
	}
}
