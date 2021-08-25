/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuminal <rcuminal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:22:04 by rcuminal          #+#    #+#             */
/*   Updated: 2021/08/15 18:10:54 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

extern int	g_tab[4][4];

void	ft_putint(int nb);

void	ft_print_tab(void)
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putint(g_tab[y][x]);
			if (x != 3)
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}
