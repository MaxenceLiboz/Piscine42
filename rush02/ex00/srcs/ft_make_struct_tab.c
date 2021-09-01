/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_struct_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:54:51 by mliboz            #+#    #+#             */
/*   Updated: 2021/09/01 18:50:06 by maxencelibo      ###   ########.fr       */
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
	size = (ft_strlen(arg) - 1) / 3 + 1;
	arglen = ft_strlen(arg);
	printf("%d\n", size);
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
