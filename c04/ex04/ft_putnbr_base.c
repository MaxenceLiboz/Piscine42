/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:18:36 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/13 10:11:27 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_error(char *base)
{
	int		i;
	int		y;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		y = 1;
		if (base[i] == '-' || base[i] == '+')
			return (1);
		while (i + y < ft_strlen(base))
		{
			if (base[i] == base[i + y])
				return (1);
			y++;
		}
		i++;
	}
	return (0);
}

void	ft_recursive(int nbr, int baselen, char *base)
{
	if (nbr != 0)
		ft_recursive(nbr / baselen, baselen, base);
	if (nbr < 0)
		ft_putchar(base[-(nbr % baselen)]);
	else if (nbr != 0)
		ft_putchar(base[nbr % baselen]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_error(base))
		return ;
	if (nbr < 0)
		ft_putchar('-');
	if (nbr == 0)
		ft_putchar(base[nbr % ft_strlen(base)]);
	else
		ft_recursive(nbr, ft_strlen(base), base);
}
