/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_valuedup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:51:44 by aleveil           #+#    #+#             */
/*   Updated: 2021/09/01 18:37:06 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft.h>

char	*ft_s_valuedup(char *arg, int *index)
{
	int		value_len;
	char	*value;
	int		i;

	value_len = *index % 3;
	if (value_len == 0)
		value_len = 3;
	value = (char *)malloc(sizeof(char) * (value_len + 1));
	if (!value)
		return (0);
	i = 0;
	while (i < value_len)
	{
		value[i] = arg[i + ft_strlen(arg) - *index];
		i++;
	}
	value[i] = '\0';
	*index -= value_len;
	return (value);
}
