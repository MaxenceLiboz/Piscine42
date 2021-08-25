/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:30:07 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/04 19:39:00 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int		a_copy;
	int		b_copy;

	if (*b != 0)
	{
		a_copy = *a;
		b_copy = *b;
		*a = a_copy / b_copy;
		*b = a_copy % b_copy;
	}
}