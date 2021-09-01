/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_malloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:59:17 by mliboz            #+#    #+#             */
/*   Updated: 2021/09/01 17:25:13 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <stdlib.h>

void	ft_free_malloc(char *dict, struct s_value *tab)
{
	int			i;

	i = 0;
	free(dict);
	while (tab[i].value != 0)
	{
		free(tab[i].value);
		free(tab[i].rank);
		i++;
	}
	free(tab);
}
