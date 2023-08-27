NAME=rush-02
CC=cc
FLAGS=-Werror -Wall -Wextra

FILES=main.c utils.c
HEADERS=rush.h

# Standard rule, equals "make rush-02"
# As it is the first rule, it will be called when just typing "make" 
all: $(NAME)

# Compiles the file using the flags
# As NAME=rush-02, this is called when you use "make rush-02"
$(NAME):
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

# Cleans all .o files
# Not needed in this project
clean:
	rm -fr *.o

# Cleans all .o files plus the executable
fclean: clean
	rm -fr $(NAME)

# Cleans everything and compiles again
re: fclean all
