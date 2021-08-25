/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:10:37 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/17 10:50:29 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && (unsigned char)s1[i] == (unsigned char)s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(char *a, char *b)
{
	char	a_copy;

	a_copy = *a;
	*a = *b;
	*b = a_copy;
}

void	ft_sort_tab(int argc, char **argv)
{
	int		nb_arg;
	int		size;
	char	*swap;

	size = argc;
	while (size > 1)
	{	
		nb_arg = 1;
		while (nb_arg < size - 1)
		{
			if (ft_strcmp(argv[nb_arg], argv[nb_arg + 1]) > 0)
			{
				swap = argv[nb_arg];
				argv[nb_arg] = argv[nb_arg + 1];
				argv[nb_arg + 1] = swap;
			}
			nb_arg++;
		}
		size--;
	}
}

int	main(int argc, char **argv)
{
	int		i;

	ft_sort_tab(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
