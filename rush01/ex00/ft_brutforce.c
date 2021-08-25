/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_brutforce.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 09:54:45 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/15 18:11:15 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
extern int	g_tab[4][4];
extern int	g_possible_tab[24][4];

int		ft_is_valid(char *arg);
void	ft_change_line(int	y, int	i);

void	ft_first(int *fi)
{
	if (*fi <= 1)
		ft_change_line(0, *fi);
	else
		ft_change_line(0, *fi - 1);
	if (*fi == 24)
		*fi = 0;
	else
		*fi += 1;
}

void	ft_second(int *fi, int *se)
{
	if (*se <= 2)
		ft_change_line(1, *se);
	else
		ft_change_line(1, *se - 1);
	if (*se == 24)
		*se = 0;
	else
		*se += 1;
	*fi = 2;
}

void	ft_third(int *fi, int *se, int *th)
{
	if (*th <= 3)
		ft_change_line(2, *th);
	else
		ft_change_line(2, *th - 1);
	if (*th == 24)
		*th = 0;
	else
		*th += 1;
	*fi = 2;
	*se = 3;
}

void	ft_last(int *fi, int *se, int *th, int *la)
{
	if (*la <= 4)
		ft_change_line(3, *la);
	else
		ft_change_line(3, *la - 1);
	if (*la == 24)
		*la = 0;
	else
		*la += 1;
	*fi = 2;
	*se = 3;
	*th = 4;
}

int	ft_brutforce(char *arg)
{
	int		fi;
	int		se;
	int		th;
	int		la;

	fi = 2;
	se = 3;
	th = 4;
	la = 5;
	while (!ft_is_valid(arg))
	{
		if (fi != 1)
			ft_first(&fi);
		else if (se != 2)
			ft_second(&fi, &se);
		else if (th != 3)
			ft_third(&fi, &se, &th);
		else if (la != 4)
			ft_last(&fi, &se, &th, &la);
		else
			return (0);
	}
	return (1);
}
