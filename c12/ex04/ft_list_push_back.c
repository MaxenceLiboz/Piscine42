/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:14:00 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/23 21:17:08 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_item;
	t_list	*last;

	last = *begin_list;
	new_item = malloc(sizeof(t_list));
	if (!new_item)
		return ;
	new_item->data = data;
	new_item->next = 0;
	while (last->next)
		last = last->next;
	last->next = new_item;
}
