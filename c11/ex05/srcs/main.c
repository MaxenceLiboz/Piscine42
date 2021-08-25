/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:24:40 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/23 10:11:54 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		result;
	int		op;
	int		(*p[5])(int, int);

	if (argc != 4)
		return (0);
	op = check_arg_error(argv);
	if (op == -1)
		return (0);
	p[0] = ft_add;
	p[1] = ft_sub;
	p[2] = ft_div;
	p[3] = ft_mult;
	p[4] = ft_mod;
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	result = (*p[op])(a, b);
	ft_putstr("\n");
	return (0);
}
