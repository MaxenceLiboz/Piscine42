/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:39:51 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/24 12:43:34 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), 
		void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
