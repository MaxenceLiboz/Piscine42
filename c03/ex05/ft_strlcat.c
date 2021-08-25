/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:07:17 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/10 14:36:28 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		r;

	r = 0;
	while (*(str + r) != 0)
		r++;
	return (r);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	r;
	unsigned int	r_copy;
	int				b;
	int				x;

	b = 0;
	r = ft_strlen(dest);
	r_copy = r;
	x = ft_strlen(src);
	if (size == 0 || size < r)
		return (x + size);
	while (src[b] && r < size - 1)
	{
		dest[r] = src[b];
		b++;
		r++;
	}
	dest[r] = '\0';
	return (r_copy + x);
}
