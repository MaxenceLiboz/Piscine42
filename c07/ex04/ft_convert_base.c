/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:19:05 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/19 08:38:18 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_checkbase(char *base, int baselen);
int	ft_checkstr(char *str, char *base, int *neg, int *str_i);
int	ft_charinbase(char *base, char c);

int	ft_convert_to_int(char *str, char *base, int baselen, int i)
{
	int		pow;
	int		copy_i;
	int		nbr;

	pow = 1;
	copy_i = i;
	nbr = 0;
	while (str[i] && ft_charinbase(base, str[i]) != -1)
		i++;
	while (i - 1 >= copy_i)
	{
		nbr += ft_charinbase(base, str[i - 1]) * pow;
		pow *= baselen;
		i--;
	}
	return (nbr);
}

int	ft_size(int nb, int baselen)
{
	int		size;

	size = 1;
	if (nb < 0)
		size++;
	while (nb != 0)
	{
		nb /= baselen;
		size++;
	}
	return (size);
}

void	ft_convert_to_str(int nbr, int baselen, char *base, char *final_nbr)
{
	int		i;

	i = 0;
	if (nbr == 0)
	{
		final_nbr[0] = base[0];
		return ;
	}
	if (nbr < 0)
		final_nbr[i++] = '-';
	while (nbr != 0)
	{
		if (nbr < 0)
			final_nbr[i++] = base[-(nbr % baselen)];
		else
			final_nbr[i++] = base[nbr % baselen];
		nbr /= baselen;
	}
	final_nbr[i] = '\0';
}

void	ft_rev_char_tab(char *final_nbr, int size)
{
	char	temp_beg;
	int		i_from_beg;
	int		i_from_end;

	if (final_nbr[0] == '-')
		i_from_beg = 1;
	else
		i_from_beg = 0;
	i_from_end = size - 2;
	while (i_from_beg < size / 2)
	{
		temp_beg = final_nbr[i_from_beg];
		final_nbr[i_from_beg] = final_nbr[i_from_end];
		final_nbr[i_from_end] = temp_beg;
		i_from_beg++;
		i_from_end--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		neg;
	int		str_i;
	int		my_nbr;
	char	*final_nbr;
	int		final_size;

	neg = 1;
	str_i = 0;
	if ((ft_checkbase(base_from, ft_strlen(base_from))
			|| ft_checkbase(base_to, ft_strlen(base_to))
			|| ft_checkstr(nbr, base_from, &neg, &str_i)))
		return (0);
	my_nbr = ft_convert_to_int(nbr, base_from, ft_strlen(base_from), str_i)
		* neg;
	final_size = ft_size(my_nbr, ft_strlen(base_to));
	final_nbr = malloc(sizeof(char) * final_size);
	if (!final_nbr)
		return (0);
	ft_convert_to_str(my_nbr, ft_strlen(base_to), base_to, final_nbr);
	ft_rev_char_tab(final_nbr, final_size);
	return (final_nbr);
}
