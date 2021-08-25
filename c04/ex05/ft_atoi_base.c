/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:48:43 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/13 10:07:54 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
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
			*neg += 1;
		*str_i += 1;
	}
	return (0);
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

int	ft_convert(char *str, char *base, int baselen, int i)
{
	int		pow;
	int		copy_i;
	int		nbr;

	pow = 1;
	copy_i = i;
	nbr = 0;
	while (str[i] && ft_charinbase(base, str[i]) != -1)
		i++;
	while (i - 1 >= copy_i)
	{
		nbr += ft_charinbase(base, str[i - 1]) * pow;
		pow *= baselen;
		i--;
	}
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int		neg;
	int		str_i;
	int		nbr;
	int		baselen;

	baselen = 0;
	while (base[baselen])
		baselen++;
	neg = 0;
	str_i = 0;
	if ((ft_checkbase(base, baselen) || ft_checkstr(str, base, &neg, &str_i)
			|| baselen <= 1))
		return (0);
	nbr = ft_convert(str, base, baselen, str_i);
	if (neg % 2)
		return (-nbr);
	return (nbr);
}
