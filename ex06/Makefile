# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 11:58:26 by tsurma            #+#    #+#              #
#    Updated: 2024/08/05 16:22:07 by tsurma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CPPFLAGS = -Wall -Werror -Wextra -g3 -std=c++98
NAME = harlFilter
MAKEFLAGS = --no-print-directory

SRC = Harl.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
