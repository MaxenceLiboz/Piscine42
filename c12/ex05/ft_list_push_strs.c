/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 18:17:26 by maxencelibo       #+#    #+#             */
/*   Updated: 2021/08/30 18:30:40 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_push_list_front(t_list **beg, void *data)
{
	t_list	*new_item;

	new_item = ft_create_elem(data);
	if (!new_item)
		return ;
	new_item->next = *beg;
	*beg = new_item;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*lst;

	lst = 0;
	i = 0;
	while (i < size)
	{
		ft_push_list_front(&lst, strs[i]);
		i++;
	}
	return (lst);
}
