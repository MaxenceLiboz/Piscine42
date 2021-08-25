/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 10:09:24 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/04 10:19:32 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		number;
	int		ascii_number;

	number = 0;
	while (number <= 9)
	{
		ascii_number = number + '0';
		ft_putchar(ascii_number);
		number++;
	}
}
