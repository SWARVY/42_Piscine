# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/29 11:20:30 by hyeoshin          #+#    #+#              #
#    Updated: 2023/01/29 15:44:43 by hyeoshin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = atoi.c main.c operator.c
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAG = -Wall -Wextra -Werror
RM = rm -f

.c.o :
	${CC} ${CFLAG} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
	${CC} ${CFLAG} -o ${NAME} ${OBJS}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : clean fclean all re