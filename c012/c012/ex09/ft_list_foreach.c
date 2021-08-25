/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:35:28 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/24 12:39:20 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void*))
{
	while(begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
