/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:19:10 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/25 08:05:38 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		pos;
	int		neg;

	i = 0;
	pos = 1;
	neg = 1;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			pos = 0;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			neg = 0;
		i++;
	}
	if (neg == 1 || pos == 1)
		return (1);
	else
		return (0);
}
