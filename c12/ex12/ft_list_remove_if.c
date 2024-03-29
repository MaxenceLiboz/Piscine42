/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:04:04 by mliboz            #+#    #+#             */
/*   Updated: 2021/09/01 16:35:32 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*temp;
	t_list	*head;

	head = *begin_list;
	while ((*cmp)(head->data, data_ref) != 0)
		head = head->next;
	temp = head;
	head = head->next;
	(*free_fct)(temp->next->data);
	free(temp->next);
	temp->next = head->next;
}
