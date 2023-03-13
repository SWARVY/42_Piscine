# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 12:31:58 by hyeoshin          #+#    #+#              #
#    Updated: 2023/01/26 12:38:32 by hyeoshin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = ${SRCS:.c=.o}
INCS = includes
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

$(TARGET) : ${OBJS}
	ar -rc $@ $^

all : ${TARGET}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${TARGET}

re : fclean all

.PHONY : clean fclean all re