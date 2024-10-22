NAME = exec

CC = c++

CFLAGS = -Wall -Werror -Wextra

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	@echo Compiling...
	@$(CC) $(CFLAGS) $^ -o $@

%.o:%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
