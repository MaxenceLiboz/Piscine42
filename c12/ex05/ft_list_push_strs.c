/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:20:57 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/24 08:11:03 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>

void	ft_apprend_list(t_list **beg, void *data)
{
	t_list	*new_item;

	new_item = malloc(sizeof(t_list));
	if (!new_item)
		return ;
	new_item->data = data;
	new_item->next = *beg;
	*beg = new_item;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*begin_list;

	begin_list = NULL;
	i = 0;
	while (i < size)
	{
		ft_apprend_list(&begin_list, strs[i]);
		i++;
	}
	(void)size;
	return (begin_list);
}
