NAME = Brainz

CXX = c++
CXXFLAGS = -std=c++98  -Wall -Wextra -Werror
RM = rm -f
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME) $(LIBFT)

$(NAME): $(OBJ) $(LIBFT)
	$(CXX) $(CXXFLAGS)  $(SRC) -o $(NAME)


clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) 

re: fclean all