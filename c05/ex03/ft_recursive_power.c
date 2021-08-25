/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:57:17 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/17 10:16:38 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (1);
}
