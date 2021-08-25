/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 08:27:46 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/17 16:24:02 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_charinbase(char *base, char c)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_checkbase(char *base, int baselen)
{
	int		i;
	int		y;

	i = 0;
	if (baselen <= 1)
		return (1);
	while (base[i])
	{
		y = 1;
		if ((base[i] == '-' || base[i] == '+' || base[i] == '\t'
				|| base[i] == '\n' || base[i] == '\v'
				|| base[i] == '\f' || base[i] == '\r' || base[i] == ' '))
			return (1);
		while (y + i < baselen)
		{
			if (base[i] == base[i + y])
			{
				return (1);
			}
			y++;
		}
		i++;
	}
	return (0);
}

int	ft_checkstr(char *str, char *base, int *neg, int *str_i)
{
	while (str[*str_i] && (str[*str_i] != '-' && str[*str_i] != '+')
		&& (ft_charinbase(base, str[*str_i]) == -1))
	{
		if ((str[*str_i] != '\t' && str[*str_i] != '\n' && str[*str_i] != '\v'
				&& str[*str_i] != '\f' && str[*str_i] != '\r'
				&& str[*str_i] != ' '))
			return (1);
		*str_i += 1;
	}
	while (str[*str_i] && (ft_charinbase(base, str[*str_i]) == -1))
	{
		if (str[*str_i] != '-' && str[*str_i] != '+')
			return (1);
		if (str[*str_i] == '-')
			*neg *= -1;
		*str_i += 1;
	}
	return (0);
}
