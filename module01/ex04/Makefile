CC=c++
SRC= main.cpp
CFLAGS=-Wall -Wextra -Werror -std=c++98
DFLAGS=-g -fsanitize=address
NAME=program

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(DFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

run: all
	./$(NAME)

test:
	echo "no test specified"

.PHONY: all clean fclean re test run
