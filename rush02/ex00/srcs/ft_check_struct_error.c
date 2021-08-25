/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_struct_error.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:57:21 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/22 15:44:45 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <ft.h>

int	ft_check_struct_error(struct s_value *s_values, int size)
{
	int		i;
	int		error;

	i = 0;
	error = 0;
	while (i < size - 2)
	{
		if (s_values[i].value == 0 || s_values[i].rank == 0)
			error = 1;
		i++;
	}
	if (error != 1)
		return (0);
	else
	{
		while (size - 1 > 0)
		{
			free(s_values[size].value);
			free(s_values[size].rank);
			size--;
		}
	}
	free(s_values);
	return (1);
}
