CC=clang++
SRC=main.cpp PhoneBook.cpp Contact.cpp ContactBuilder.cpp
INCL=PhoneBook.hpp Contact.hpp
CFLAGS=-Wall -Wextra -Werror -std=c++98
DFLAGS=-g
NAME=phonebook

all: $(NAME)

$(NAME): $(SRC) $(INCL)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

run: all
	./megaphone

test:
	echo "no test specified"

.PHONY: all clean fclean re test run
