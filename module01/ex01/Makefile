OBJ_DIR = bin/
INC_DIR = include/
SRC_DIR = src/

SRCS = Zombie.cpp main.cpp zombieHorde.cpp 
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

NAME = Horde 

CPPFLAGS = -Wall -Werror -Wextra -std=c++98
INCPATH = -I$(INC_DIR)

CC = c++

all: $(NAME)

$(NAME) : $(OBJ_DIR) $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	$(CC) $(CPPFLAGS) $(INCPATH) -c $< -o $@

$(OBJ_DIR) :
	@mkdir -p $(OBJ_DIR)

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
