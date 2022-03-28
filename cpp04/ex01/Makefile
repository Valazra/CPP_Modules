NAME = ex01

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

INCS = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

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
