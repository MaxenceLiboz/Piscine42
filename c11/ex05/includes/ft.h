/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:25:24 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/23 09:46:13 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		check_arg_error(char **argv);
int		ft_atoi(char *str);
int		ft_make_op(char div, int a, int b);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_div(int a, int b);
int		ft_mult(int a, int b);
int		ft_mod(int a, int b);

#endif
