/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_struct_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:54:51 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/22 22:18:11 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <ft.h>

struct s_value	*ft_make_struct_tab(char *arg)
{
	t_value		*s_values;
	int			ival;
	int			sizemax;
	int			size;
	int			arglen;

	ival = 0;
	size = ft_strlen(arg);
	arglen = size;
	if (size % 3 != 0)
		size = (size - (size % 3) + 3) / 3;
	else
		size = size / 3;
	s_values = malloc(sizeof(*s_values) * (size + 1));
	if (!s_values)
		return (0);
	sizemax = size;
	while (ival < sizemax)
	{
		s_values[ival].value = ft_s_valuedup(arg, &arglen);
		size--;
		s_values[ival].rank = ft_s_rankdup(size);
		ival++;
	}
	s_values[ival].value = 0;
	ft_check_struct_error(s_values, sizemax);
	return (s_values);
}
