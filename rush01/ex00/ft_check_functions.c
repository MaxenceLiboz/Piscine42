/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 09:30:59 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/15 18:11:17 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
extern int	g_tab[4][4];
extern int	g_possible_tab[24][4];

char	ft_left_visible(int y)
{
	int	vision;
	int	visible;
	int	x;

	vision = 0;
	visible = 0;
	x = 0;
	while (x < 4)
	{
		if (g_tab[y][x] > visible)
		{
			visible = g_tab[y][x];
			vision++;
		}
		x++;
	}
	return (vision + '0');
}

char	ft_right_visible(int y)
{
	int	vision;
	int	visible;
	int	x;

	vision = 0;
	visible = 0;
	x = 3;
	while (x >= 0)
	{
		if (g_tab[y][x] > visible)
		{
			visible = g_tab[y][x];
			vision++;
		}
		x--;
	}
	return (vision + '0');
}

char	ft_up_visible(int x)
{
	int	vision;
	int	visible;
	int	y;

	vision = 0;
	visible = 0;
	y = 0;
	while (y < 4)
	{
		if (g_tab[y][x] > visible)
		{
			visible = g_tab[y][x];
			vision++;
		}
		y++;
	}
	return (vision + '0');
}

char	ft_down_visible(int x)
{
	int	vision;
	int	visible;
	int	y;

	vision = 0;
	visible = 0;
	y = 3;
	while (y >= 0)
	{
		if (g_tab[y][x] > visible)
		{
			visible = g_tab[y][x];
			vision++;
		}
		y--;
	}
	return (vision + '0');
}

int	ft_check_same_number(int x, int y, int nb)
{
	int		x_check;
	int		y_check;

	x_check = 0;
	y_check = 0;
	while (x_check < 4)
	{
		if (g_tab[y][x_check] == nb && x_check != x)
			return (1);
		x_check++;
	}
	while (y_check < 4)
	{
		if (g_tab[y_check][x] == nb && y_check != y)
			return (1);
		y_check++;
	}
	return (0);
}
