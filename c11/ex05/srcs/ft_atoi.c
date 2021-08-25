/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 23:51:02 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/21 23:59:42 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_checkstr(char *str, int *neg, int *str_i)
{
	while (str[*str_i] && (str[*str_i] != '-' && str[*str_i] != '+')
		&& (str[*str_i] < '0' || str[*str_i] > '9'))
	{
		if ((str[*str_i] != '\t' && str[*str_i] != '\n' && str[*str_i] != '\v'
				&& str[*str_i] != '\f' && str[*str_i] != '\r'
				&& str[*str_i] != ' '))
			return (1);
		*str_i += 1;
	}
	while (str[*str_i] && (str[*str_i] < '0' || str[*str_i] > '9'))
	{
		if (str[*str_i] != '-' && str[*str_i] != '+')
			return (1);
		if (str[*str_i] == '-')
			*neg += 1;
		*str_i += 1;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		neg;
	int		str_i;
	int		nb;

	neg = 0;
	str_i = 0;
	nb = 0;
	if (ft_checkstr(str, &neg, &str_i))
		return (0);
	while (str[str_i] >= '0' && str[str_i] <= '9')
	{
		nb = nb * 10 + (str[str_i] - '0');
		str_i++;
	}
	if (neg % 2)
		return (-nb);
	return (nb);
}
