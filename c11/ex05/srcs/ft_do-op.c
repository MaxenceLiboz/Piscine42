/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:45:02 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/30 14:32:06 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	ft_add(int a, int b)
{
	a = a + b;
	ft_putnbr(a);
	return (0);
}

int	ft_sub(int a, int b)
{
	a = a - b;
	ft_putnbr(a);
	return (0);
}

int	ft_div(int a, int b)
{
	a = a / b;
	ft_putnbr(a);
	return (0);
}

int	ft_mult(int a, int b)
{
	a = a * b;
	ft_putnbr(a);
	return (0);
}

int	ft_mod(int a, int b)
{
	a = a % b;
	ft_putnbr(a);
	return (0);
}
