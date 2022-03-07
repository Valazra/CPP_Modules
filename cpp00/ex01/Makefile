NAME = phone

COMPILER = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

INCS = PhoneBook.hpp Contact.hpp

SRCS = PhoneBook.cpp Contact.cpp main.cpp

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
