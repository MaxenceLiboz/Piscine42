/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 08:00:39 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/06 08:56:27 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int		temp_beg;
	int		i_from_beg;
	int		i_from_end;

	i_from_beg = 0;
	i_from_end = size - 1;
	while (i_from_beg < size / 2)
	{
		temp_beg = tab[i_from_beg];
		tab[i_from_beg] = tab[i_from_end];
		tab[i_from_end] = temp_beg;
		i_from_beg++;
		i_from_end--;
	}
}
