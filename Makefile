NAME	= crocus

CC	= gcc

RM	= rm -f

SRCS	= ./src/change_number.c \
	  ./src/check_is_number.c \
	  ./src/clean.c \
	  ./src/init/add_char.c \
	  ./src/init/init.c \
	  ./src/main.c \
	  ./src/print_nb.c 

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
