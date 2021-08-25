/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:59:17 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/22 19:22:39 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <ft.h>

void	ft_free_malloc(char *dict, struct s_value *tab)
{
	int			i;

	i = 0;
	free(dict);
	while (tab[i].value != 0)
	{
		free(tab[i].value);
		free(tab[i].rank);
	}
	free(tab);
}
