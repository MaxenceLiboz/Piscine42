/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:46:57 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/24 08:14:48 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_item;

	new_item = malloc(sizeof(t_list));
	if (!new_item)
		return ;
	new_item->next = *begin_list;
	new_item->data = data;
	*begin_list = new_item;
}
