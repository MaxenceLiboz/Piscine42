/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 11:32:43 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/25 08:11:14 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_tablen(char **tab)
{
	int		i;

	i = 0;
	while (tab[i] != 0)
		i++;
	return (i);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		nb_arg;
	int		size;
	char	*swap;

	i = 0;
	size = ft_tablen(tab);
	while (size > 1)
	{	
		nb_arg = 0;
		while (nb_arg < size - 1)
		{
			if (ft_strcmp(tab[nb_arg], tab[nb_arg + 1]) > 0)
			{
				swap = tab[nb_arg];
				tab[nb_arg] = tab[nb_arg + 1];
				tab[nb_arg + 1] = swap;
			}
			nb_arg++;
		}
		size--;
	}
}
