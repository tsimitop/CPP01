NAME = exec

CC = c++

CFLAGS = -Wall -Werror -Wextra

DEBUG = -g

SRCS = main.cpp Harl.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	@echo Compiling...
	@$(CC) $(DEBUG) $(CFLAGS) $^ -o $@

%.o:%cpp
	@$(CC) $(DEBUG) $(CFLAGS) -c $< -o $@

all : $(NAME)

clean :
	@echo Deleting objects...
	@rm -f $(OBJS)

fclean : clean
	@echo Deleting executable...
	@rm -f $(NAME)

re : fclean all

.PHONY = all clean fclean re