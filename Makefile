CC = g++

CCFLAGS = -g -Wall -Wextra -Werror

CLEAN = rm

CLEAN_FLAGS = -f

SRC = main.cpp \
	  get_size.cpp \
	  lexicographical_order.cpp \
	  program_errors.cpp


OBJ = main.o \
	  get_size.o \
	  lexicographical_order.o \
	  program_errors.o

NAME = test

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) $^ -o $@

$(OBJ): $(SRC)
	$(CC) $(CCFLAGS) -c $^

re: fclean all

clean:
	$(CLEAN) $(CLEAN_FLAGS) $(OBJ)
	$(CLEAN) $(CLEAN_FLAGS) *~

fclean: clean
	$(CLEAN) $(CLEAN_FLAGS) $(NAME)
