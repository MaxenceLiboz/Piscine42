# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mliboz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/19 13:08:19 by mliboz            #+#    #+#              #
#    Updated: 2021/08/25 08:06:39 by mliboz           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS 		= srcs/main.c srcs/ft_do-op.c srcs/ft_atoi.c srcs/ft_strcmp.c\
			  srcs/ft_strlen.c srcs/ft_putnbr.c srcs/ft_putstr.c\
			  srcs/ft_putchar.c srcs/ft_check_arg_error.c

OBJS 		= ${SRCS:.c=.o}

INCLUDES	= includes/ft.h

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

NAME		= 	do-op

RM			= rm -f

all:		${NAME}

.c.o:		${INCLUDES}
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${INCLUDES}
	${CC} ${CFLAGS} -I includes -o ${NAME} ${OBJS}
			
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re
