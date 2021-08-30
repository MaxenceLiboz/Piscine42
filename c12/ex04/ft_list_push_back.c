/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 17:52:34 by maxencelibo       #+#    #+#             */
/*   Updated: 2021/08/30 18:15:39 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_item;
	t_list	*head;

	head = *begin_list;
	new_item = ft_create_elem(data);
	if (!new_item)
		return ;
	if (head)
	{
		while (head->next)
			head = head->next;
		head->next = new_item;
	}
	else
		*begin_list = new_item;
}
