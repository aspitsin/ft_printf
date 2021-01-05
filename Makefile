# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alex <alex@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/26 23:38:24 by xzaida            #+#    #+#              #
#    Updated: 2021/01/05 19:14:49 by alex             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_printf.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_itoa.c  \
		ft_putchar_fd.c	\
		ft_itoa_hex.c 	\
		ft_tolower.c \
		ft_split.c \
		ft_substr.c 

OBJS	= ${SRCS:.c=.o}
CC		= gcc
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror

%.o : %.c
	${CC} ${CFLAGS} -c $<
${NAME}:	${OBJS}
	ar rcs ${NAME} ${OBJS}
	ranlib ${NAME}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

tclean:
	${RM} test

testc:
	gcc -o test test.c -L. -lft 

re:		fclean all

.PHONY:	all clean fclean re