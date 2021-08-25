/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:27:26 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/06 08:25:44 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_tab(int tab[])
{
	int		size;
	int		i;

	size = 1;
	i = 0;
	while (tab[size] != 0 && size < 9)
	{
		size++;
	}
	while (i < size)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[size - 1] != 9 || tab[size - 2] != tab[size - 1] - 1)
	{
		write(1, ", ", 2);
	}
	i = 0;
}

void	ft_init_rev(int tab[], int n)
{
	if (n > 0)
	{
		tab[n - 2] = tab[n - 1] - 1;
		ft_init_rev(tab, n - 1);
	}
}

void	ft_addition(int tab[], int n)
{
	if (n > 0)
	{
		while (tab[n - 1] < 9)
		{
			tab[n - 1]++;
			ft_put_tab(tab);
		}
		tab[n - 2]++;
		ft_init_rev(tab, n - 1);
		tab[n - 1] = tab[n - 2] + 1;
		ft_put_tab(tab);
		if (tab[n - 1] < 9 && tab[n - 2] == tab[n - 1] - 1)
		{
			ft_addition(tab, n);
		}
	}
}

void	ft_print_combn(int n)
{
	int		tab[9];
	int		i;

	tab[0] = 0;
	if (n != 1)
	{
		i = 1;
		while (i < n)
		{
			tab[i] = tab[i - 1] + 1;
			i++;
		}
		ft_put_tab(tab);
		ft_addition(tab, n);
	}
	else
	{
		write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8", 25);
		write(1, ", ", 2);
		write(1, "1, 2, 3, 4, 5, 6, 7, 8, 9", 25);
	}
}
