NAME=libft.a

SRCS= ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_strdup.c ft_strncmp.c ft_tolower.c \
ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcmp.c ft_memset.c ft_strnstr.c ft_toupper.c \
ft_calloc.c ft_isascii.c  ft_memcpy.c ft_strchr.c ft_strlen.c ft_strrchr.c

OBJS=ft_atoi.o ft_isalnum.o ft_isdigit.o ft_memchr.o ft_memmove.o ft_strdup.o ft_strncmp.o ft_tolower.o \
ft_bzero.o ft_isalpha.o ft_isprint.o ft_memcmp.o ft_memset.o ft_strnstr.o ft_toupper.o \
ft_calloc.o ft_isascii.o   ft_memcpy.o ft_strchr.o ft_strlen.o ft_strrchr.o
$(NAME): $(SRCS) libft.h
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
all: $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all