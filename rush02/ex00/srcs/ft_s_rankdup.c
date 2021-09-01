/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_rankdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:17:36 by aleveil           #+#    #+#             */
/*   Updated: 2021/09/01 18:37:01 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_s_rankdup(int rank)
{
	int		i;
	char	*res_rank;

	i = 0;
	res_rank = malloc(sizeof(char) * ((rank * 3 ) + 2));
	if (!res_rank)
		return (0);
	res_rank[i] = '1';
	i++;
	while (i < rank * 3 + 1)
	{
		res_rank[i] = '0';
		i++;
	}
	res_rank[i] = '\0';
	return (res_rank);
}
