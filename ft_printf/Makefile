NAME = libftprintf.a


SRC = ft_strlen.c \
      ft_hex_upper.c \
      ft_hex_lowercase.c \
      ft_print_pointer.c \
      ft_putchar.c \
      ft_putnbr.c \
      ft_putstr.c \
      ft_unsigned_nbr.c \
      ft_printf.c 

OBJS = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar

all: $(NAME) $(TEST_NAME)

$(NAME): $(OBJS)
	$(AR) -csr $@ $^

$(TEST_NAME): $(NAME) ft_test.o
	$(CC) $(CFLAGS) -o $(TEST_NAME) ft_test.o $(NAME)

ft_test.o: ft_test.c
	$(CC) $(CFLAGS) -c ft_test.c -o ft_test.o

clean:
	rm -f $(OBJS) ft_test.o

fclean: clean
	rm -f $(NAME) $(TEST_NAME)

re: fclean all

.PHONY: all clean fclean re
