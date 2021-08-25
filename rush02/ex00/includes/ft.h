/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:07:22 by mliboz            #+#    #+#             */
/*   Updated: 2021/08/22 20:00:01 by mliboz           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct s_value
{
	char	*value;
	char	*rank;
}	t_value;

int				ft_check_arg_error(int argc, char **argv);
char			*ft_check_dict(char *filename);
int				ft_check_struct_error(struct s_value *s_values, int size);
struct	s_value	*ft_make_struct_tab(char *args);
char			*ft_s_valuedup(char *str, int *strlen);
char			*ft_s_rankdup(int rank);
int				ft_strlen(char *str);
void			ft_putstr(char *str);
int				ft_strstr(char *str, char *to_find);
char			**ft_split_struct_value(char *value, int valuelen);
int				ft_search_and_print(struct s_value *s_values, char *dict);
void			ft_free_malloc(char *dict, struct s_value *tab);
char			*ft_argdup(char *arg);
int				ft_display(char *str, char *to_find);
char			*ft_strdup(char *src);

#endif
