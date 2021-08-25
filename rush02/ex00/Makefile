# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mliboz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/19 13:08:19 by mliboz            #+#    #+#              #
#    Updated: 2021/08/22 22:42:26 by mliboz           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS 		= srcs/ft_check_arg.c srcs/ft_argdup.c  srcs/ft_check_dict.c \
			  srcs/ft_check_struct_error.c srcs/ft_display.c \
			  srcs/ft_free_malloc.c srcs/ft_make_struct_tab.c \
			  srcs/ft_s_rankdup.c srcs/ft_s_valuedup.c \
			  srcs/ft_search_and_print.c srcs/ft_split_struct_value.c \
			  srcs/ft_strdup.c srcs/ft_strlen.c srcs/ft_strstr.c \
			  srcs/ft_putstr.c
			  

OBJS 		= ${SRCS:.c=.o}

INCLUDES	= includes/ft.h

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

NAME		= 	rush-02

MAIN		= ./main.c

LIB			= libft.a

RM			= rm -f

all:		${NAME}

.c.o:		${INCLUDES}
	${CC} ${CFLAGS} -c -I includes $< -o ${<:.c=.o}

${NAME}:	${OBJS} libft.a
	${CC} ${CFLAGS} -o ${NAME} -I includes ${MAIN} ${LIB}

${LIB}:		${OBJS}
			ar rc libft.a ${OBJS}
		
			
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME} ${LIB}

re:			fclean all

.PHONY: 	all clean fclean re
