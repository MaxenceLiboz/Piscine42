/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:40:57 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/22 22:38:52 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <ft.h>

int	main(int argc, char **argv)
{
	char		*dict;
	t_value		*tab;

	if (ft_check_arg_error(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (argc == 2)
	{
		dict = ft_check_dict("numbers.dict");
		tab = ft_make_struct_tab(argv[1]);
	}
	else
	{
		dict = ft_check_dict(argv[1]);
		tab = ft_make_struct_tab(argv[2]);
	}
	if (ft_search_and_print(tab, dict) == 0)
		ft_putstr("Dict Error\\n");
	ft_free_malloc(dict, tab);
	return (0);
}
