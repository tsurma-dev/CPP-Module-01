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
