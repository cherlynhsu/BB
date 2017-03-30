# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pkirsch <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/25 17:59:11 by pkirsch           #+#    #+#              #
#    Updated: 2017/03/25 17:59:13 by pkirsch          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = rush-2

PS = srcs
PS0 = srcs/rush0_mod
PH = includes

SRC = {main,parsing_rush2,display_functions,rush2,rush0_adaptation,more_functions}.c
SRC0 = {rush00,rush01,rush02,rush03,rush04}.c

FLAGS = -Wall -Wextra -Werror

TEST = rush03.c
NAME_TEST = rush0

all: $(NAME)

$(NAME): 
	gcc $(FLAGS) $(PS)/$(SRC) $(PS0)/$(SRC0) -I $(PH)/ -o $(NAME)

test:
	gcc $(FLAGS) ../rush0/$(TEST) ../rush0/ft_putchar.c ../rush0/main.c -o $(NAME_TEST)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: clean fclean all re $(NAME) test