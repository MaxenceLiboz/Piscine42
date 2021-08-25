/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruvauzel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 08:17:21 by ruvauzel          #+#    #+#             */
/*   Updated: 2021/08/07 13:18:16 by ruvauzel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char	c);

char	ft_format(int	width, int	height, int	x, int	y)
{
	if (x == 0 && y == 0)
		return ('o');
	if ((height - y) == 1 && x == 0)
		return ('o');
	if ((width - x) == 1 && y == 0)
		return ('o');
	if ((width - x) == 1 && (height - y) == 1)
		return ('o');
	if (y == 0)
		return ('-');
	if ((height - y) == 1)
		return ('-');
	if (x == 0)
		return ('|');
	if ((width - x) == 1)
		return ('|');
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
