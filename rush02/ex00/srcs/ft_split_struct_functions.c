/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_struct_functions.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:38:17 by maxencelibo       #+#    #+#             */
/*   Updated: 2021/09/01 17:40:58 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	ft_tablen_calculator(char *value, int valuelen, int offset)
{
	int	len;

	len = 0;
	if (valuelen == 3)
		len += 2;
	if (valuelen >= 2 && value[1 - offset] != '0')
		len += 1;
	if (value[1 - offset] != '1' && value[0 - offset] != '0')
		len += 1;
	return (len);
}

int	ft_tens(char **value_tab, int *index, char t_value, char u_value)
{
	char	str_ten[3];

	str_ten[0] = t_value;
	if (t_value == '1')
		str_ten[1] = u_value;
	else
		str_ten[1] = '0';
	str_ten[2] = '\0';
	value_tab[*index] = ft_strdup(str_ten);
	*index += 1;
	return (0);
}

int	ft_hundreds_or_units(char **value_tab, int *index, char hu_value)
{
	char	str_hundred_or_units[2];

	str_hundred_or_units[0] = hu_value;
	str_hundred_or_units[1] = '\0';
	value_tab[*index] = ft_strdup(str_hundred_or_units);
	*index += 1;
	return (0);
}
