/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:36:26 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/10 18:35:40 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_conv(char first, char second, char add_f, char add_s)
{
	ft_putchar('\\');
	ft_putchar(first + add_f);
	ft_putchar(second + add_s);
}

void	ft_convert_hexa(unsigned char a)
{
	int		first;
	int		second;

	first = a / 16;
	second = a % 16;
	if (first == 0)
	{
		if (second >= 10)
			ft_print_conv(first, second - 10, '0', 'a');
		else
			ft_print_conv(first, second, '0', '0');
	}
	else
	{
		if (first >= 10 && second >= 10)
			ft_print_conv(first - 10, second - 10, 'a', 'a');
		else if (first >= 10 && second < 10)
			ft_print_conv(first - 10, second, 'a', '0');
		else if (first < 10 && second >= 10)
			ft_print_conv(first, second - 10, '0', 'a');
		else if (first < 10 && second < 10)
			ft_print_conv(first, second, '0', '0');
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_convert_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	printf("Coucou\\ntu vas bien ?\n");
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	printf("\nCoucou\\200tu vas bien ?\n");
	ft_putstr_non_printable("Coucou\200tu vas bien ?");
}
