/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruvauzel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 09:14:45 by ruvauzel          #+#    #+#             */
/*   Updated: 2021/08/07 13:19:43 by ruvauzel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);

char	ft_format(int	width, int	height, int	x, int	y)
{
	if (x == 0 && y == 0)
		return ('/');
	if ((height - y) == 1 && x == 0)
		return ('\\');
	if ((width - x) == 1 && y == 0)
		return ('\\');
	if ((width - x) == 1 && (height - y) == 1)
		return ('/');
	if (y == 0)
		return ('*');
	if ((height - y) == 1)
		return ('*');
	if (x == 0)
		return ('*');
	if ((width - x) == 1)
		return ('*');
	return (' ');
}

void	rush(int	width, int	height)
{
	int	x;
	int	y;

	if (width <= 0 || height <= 0)
		return ;
	y = 0;
	while (y < height)
	{
		x = 0;
		while (x < width)
		{
			ft_putchar(ft_format(width, height, x, y));
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
