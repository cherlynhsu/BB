# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yahsu <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/26 17:14:41 by yahsu             #+#    #+#              #
#    Updated: 2017/03/27 16:57:39 by yahsu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/
HEADER = ./includes/
CC = gcc
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) $(NAME) $(SRC)

clean:
	/bin/rm *.o

flcean: clean
	/bin/rm -f $(NAME)

re: fclean all
