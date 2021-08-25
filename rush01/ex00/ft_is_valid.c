/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:22:05 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/15 18:10:44 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
extern int		g_tab[4][4];
extern int		g_possible_tab[24][4];

char			ft_left_visible(int	y);
char			ft_right_visible(int	y);
char			ft_up_visible(int	x);
char			ft_down_visible(int x);
int				ft_check_same_number(int x, int y, int nb);

int	ft_error_same_number(void)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (ft_check_same_number(x, y, g_tab[y][x]) == 1)
				return (1);
			x++;
		}
		y++;
	}
	return (0);
}

int	ft_error_updown_visible(char *arg)
{
	if ((ft_up_visible(0) != arg[0])
		|| (ft_down_visible(0) != arg[0 + 4]))
		return (1);
	if ((ft_up_visible(1) != arg[1])
		|| (ft_down_visible(1) != arg[1 + 4]))
		return (1);
	if ((ft_up_visible(2) != arg[2])
		|| (ft_down_visible(2) != arg[2 + 4]))
		return (1);
	if ((ft_up_visible(3) != arg[3])
		|| (ft_down_visible(3) != arg[3 + 4]))
		return (1);
	return (0);
}

int	ft_error_leftright_visible(char	*arg)
{
	if ((ft_left_visible(0) != arg[0 + 8])
		|| (ft_right_visible(0) != arg[0 + 12]))
		return (1);
	if ((ft_left_visible(1) != arg[1 + 8])
		|| (ft_right_visible(1) != arg[1 + 12]))
		return (1);
	if ((ft_left_visible(2) != arg[2 + 8])
		|| (ft_right_visible(2) != arg[2 + 12]))
		return (1);
	if ((ft_left_visible(3) != arg[3 + 8])
		|| (ft_right_visible(3) != arg[3 + 12]))
		return (1);
	return (0);
}

int	ft_is_valid(char *arg)
{
	int		er_nb;
	int		er_ud;
	int		er_lr;

	er_nb = ft_error_same_number();
	er_ud = ft_error_updown_visible(arg);
	er_lr = ft_error_leftright_visible(arg);
	if (er_nb == 1 || er_ud == 1 || er_lr == 1)
		return (0);
	return (1);
}
