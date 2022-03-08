NAME = ex01

COMPILER = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

INCS = Zombie.hpp

SRCS = Zombie.cpp main.cpp zombieHorde.cpp

OBJ = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(COMPILER) $(FLAGS) -I. -c $< -o $@

all:	$(NAME)

$(NAME):	$(OBJ)
		$(COMPILER) $(FLAGS) -I. -o $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re make
