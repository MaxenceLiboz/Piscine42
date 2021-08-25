/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 19:57:52 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/17 10:50:39 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	main(int argc, char **argv)
{
	int		nb_arg;
	int		i;

	nb_arg = 1;
	while (nb_arg < argc)
	{
		i = 0;
		while (argv[nb_arg][i])
			i++;
		write(1, argv[nb_arg], i);
		write(1, "\n", 1);
		nb_arg++;
	}
	return (0);
}
