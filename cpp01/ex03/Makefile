NAME = ex03

COMPILER = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

INCS = Weapon.hpp HumanA.hpp HumanB.hpp

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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
