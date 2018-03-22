# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/25 23:40:56 by wabousfi          #+#    #+#              #
#    Updated: 2018/02/26 20:43:09 by wabousfi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= ./bsq
RM	= rm -f

all:
	rm -rf bsq && gcc -Wall -Wextra -Werror -o bsq -I ./include src/*.c
clean	:
	$(RM) *.o

fclean	: clean
	$(RM) $(NAME)
re	: fclean all
test:
	rm -rf bsq
	gcc -Wall -Wextra -Werror -o bsq -I ./include src/*.c
	echo "\033[32;1;4;5;7m////////////////////////////////////////////////\n\n\t\tSuccess Compilation\t\t\n\n////////////////////////////////////////////////\033[0m"
	./test.sh
