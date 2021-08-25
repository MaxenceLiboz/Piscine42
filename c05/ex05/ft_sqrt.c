/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:53:38 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/16 16:50:00 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= 46341)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}