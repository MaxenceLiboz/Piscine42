/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 09:36:32 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/25 09:48:47 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
void	ft_list_merge(t_list **begin_list1, t_list **begin_list2)
{
	t_list	*head;
	t_list	*head2;

	head = *begin_list1;
	head2 = *begin_list2;
	while (head->next)
		head = head->next;
	while (head2)
	{
		head->next = head2;
		head2 = head2->next;
		head = head->next;
	}
}
