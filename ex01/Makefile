OBJ_DIR = bin/
INC_DIR = includes/
SRC_DIR = srcs/

SRCS = phoneBook.cpp contact.cpp
OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.cpp=.o))

NAME = phoneBook

CPPFLAGS = -Wall -Werror -Wextra
CC = g++

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
