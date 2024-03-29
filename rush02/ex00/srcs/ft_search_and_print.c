/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_and_print.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:24:26 by mliboz            #+#    #+#             */
/*   Updated: 2021/09/01 18:31:46 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && (unsigned char)s1[i] == (unsigned char)s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_search(struct s_value *s_values, char *dict)
{
	char	**tab;
	int		ival;
	int		itab;

	ival = 0;
	while (s_values[ival].value != 0)
	{
		itab = 0;
		tab = ft_split_struct_value(s_values[ival].value,
				ft_strlen(s_values[ival].value));
		while (tab[itab] != 0)
		{
			if (!ft_strstr(dict, tab[itab]))
				return (0);
			itab++;
		}
		if (!ft_strstr(dict, s_values[ival].rank))
			return (0);
		ival++;
	}
	return (1);
}

void	ft_print(struct s_value *s_values, char *dict)
{
	char	**tab;
	int		ival;
	int		itab;

	ival = 0;
	while (s_values[ival].value != 0)
	{
		itab = 0;
		tab = ft_split_struct_value(s_values[ival].value,
				ft_strlen(s_values[ival].value));
		while (tab[itab] != 0)
		{
			if (ival != 0 || itab != 0)
				ft_putstr(" ");
			ft_display(dict, tab[itab]);
			if (tab[itab + 1] == 0 && s_values[ival + 1].value != 0)
				ft_putstr(" ");
			itab++;
		}
		if (ft_strcmp(s_values[ival].rank, "1") != 0
			&& ft_strcmp(s_values[ival].value, "000") != 0)
			ft_display(dict, s_values[ival].rank);
		ival++;
	}
}

int	ft_search_and_print(struct s_value *s_values, char *dict)
{
	if (!ft_search(s_values, dict))
		return (0);
	else
		ft_print(s_values, dict);
	return (1);
}
