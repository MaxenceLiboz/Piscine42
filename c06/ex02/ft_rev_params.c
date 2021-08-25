/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:07:27 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/17 10:49:32 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int argc, char **argv)
{
	int		nb_arg;
	int		i;

	nb_arg = argc - 1;
	while (nb_arg > 0)
	{
		i = 0;
		while (argv[nb_arg][i])
			i++;
		write(1, argv[nb_arg], i);
		write(1, "\n", 1);
		nb_arg--;
	}
	return (0);
}
