/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:47:56 by mliboz            #+#    #+#             */
/*   Updated: 2021/09/01 16:32:09 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*head;

	if (!begin_list)
		return (begin_list);
	head = begin_list;
	while (head)
	{
		if ((*cmp)(head->data, data_ref) == 0)
			return (head);
		head = head->next;
	}
	return (begin_list);
}
