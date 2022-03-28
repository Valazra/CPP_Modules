NAME = ex02

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

INCS = Claptrap.hpp ScavTrap.hpp FragTrap.hpp

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

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
