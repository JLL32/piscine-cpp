CC=clang++
SRC=main.cpp StringConverter.cpp
CFLAGS=-Wall -Wextra -Werror -std=c++98
DFLAGS=-g
NAME=convert

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
