/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:00:59 by mliboz            #+#    #+#             */
/*   Updated: 2021/09/01 18:36:14 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_natural(char *argv)
{
	int		i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] < '0' || argv[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_arg_error(int argc, char **argv)
{
	int		is_natural;

	if (argc > 3 || argc < 2)
		return (1);
	if (argc == 2)
		is_natural = ft_is_natural(argv[1]);
	else
		is_natural = ft_is_natural(argv[2]);
	if (!is_natural)
		return (1);
	return (0);
}
