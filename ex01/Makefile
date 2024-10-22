NAME = brainz

CC = c++

CFLAGS = -Wall -Werror -Wextra

DEBUG = -g

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	@echo Compiling...
	@$(CC) $(DEBUG) $(CFLAGS) $^ -o $@

%.o:%.cpp
	@$(CC) $(DEBUG) $(CFLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
