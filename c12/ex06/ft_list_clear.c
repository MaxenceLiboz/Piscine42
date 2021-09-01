/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:32:34 by maxencelibo       #+#    #+#             */
/*   Updated: 2021/09/01 15:47:30 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*temp;

	while (begin_list)
	{
		temp = begin_list;
		begin_list = begin_list->next;
		(*free_fct)(temp->data);
		free(temp->next);
		free(temp);
	}
}
