# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 20:40:06 by ioduwole          #+#    #+#              #
#    Updated: 2023/11/05 17:24:09 by ioduwole         ###   ########.fr        #
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
	@echo $(GREEN) "Cpp03 ex03 compiled"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@echo $(GREEN)"Cleaning object files.... ...."

fclean: 
	@rm -rf $(NAME)
	@echo $(GREEN)"Cleaning program => $(NAME)"

re: fclean all
	@echo $(GREEN)"Recompiling"

.PHONY: all clean fclean re