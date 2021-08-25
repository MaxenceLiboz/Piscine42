# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mliboz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/19 13:08:19 by mliboz            #+#    #+#              #
#    Updated: 2021/08/23 08:28:38 by mliboz           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS 		= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
			  srcs/ft_strlen.c srcs/ft_swap.c

OBJS 		= ${SRCS:.c=.o}

INCLUDES	= includes/ft.h

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

NAME		= 	libft.a

RM			= rm -f

all:		${NAME}

.c.o:		${INCLUDES}
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${INCLUDES}
			ar rc ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re
