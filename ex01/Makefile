# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 20:40:06 by ioduwole          #+#    #+#              #
#    Updated: 2023/11/02 21:57:58 by ioduwole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	claptrap

SRC	=	$(wildcard *.cpp)
OBJ	=	$(SRC:.cpp=.o)

CC	=	g++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo $(GREEN) "Cpp03 ex01 compiled"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re