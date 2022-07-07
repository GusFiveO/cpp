OBJ_DIR = bin/

SRCS = megaphone.cpp
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

NAME = megaphone

CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

all: $(NAME)

$(NAME) : $(OBJ_DIR) $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o : %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(OBJ_DIR) :
	@mkdir -p $(OBJ_DIR)

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
