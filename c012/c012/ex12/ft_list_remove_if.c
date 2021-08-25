/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:04:04 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/25 09:35:51 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*temp;
	t_list	*head;

	head = *begin_list;
	while ((*cmp)(head->next->data, data_ref) != 0)
		head = head->next;
	temp = head;
	head = head->next;
	(*free_fct)(temp->next->data);
	free(temp->next);
	temp->next = head->next;
}
