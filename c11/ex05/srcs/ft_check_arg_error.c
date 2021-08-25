/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:29:56 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/25 08:06:22 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>

int	ft_is_op(char *arg)
{
	if (ft_strlen(arg) != 1)
		return (-1);
	if (arg[0] == '+')
		return (0);
	if (arg[0] == '-')
		return (1);
	if (arg[0] == '/')
		return (2);
	if (arg[0] == '*')
		return (3);
	if (arg[0] == '%')
		return (4);
	return (-1);
}

int	check_arg_error(char **argv)
{
	int		op;

	op = ft_is_op(argv[2]);
	if (op == -1)
	{
		ft_putstr("0\n");
		return (-1);
	}
	if (ft_atoi(argv[3]) == 0)
	{
		if (op == 2)
		{
			ft_putstr("Stop : division by zero\n");
			return (-1);
		}
		else if (op == 4)
		{
			ft_putstr("Stop : modulo by zero\n");
			return (-1);
		}
	}
	return (op);
}
