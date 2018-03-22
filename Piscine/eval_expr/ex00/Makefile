# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/25 23:31:27 by wabousfi          #+#    #+#              #
#    Updated: 2018/02/25 23:31:28 by wabousfi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = eval_expr.c ft_tools.c main.c

FLAGS = -Wall -Wextra -Werror

CC = cc

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(FLAGS) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
