/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 08:27:01 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/06 08:56:07 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int		index;
	int		temp_tab;

	index = 0;
	while (index + 1 < size)
	{
		if (tab[index] > tab[index + 1])
		{
			temp_tab = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = temp_tab;
			index = 0;
		}
		else
			index++;
	}
}
