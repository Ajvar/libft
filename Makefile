NAME=libft.a
RULES= all clean fclean re ${NAME}

SRCS= 					ft_atoi.c         		ft_memchr.c             ft_split.c              ft_strncmp.c \
ft_bzero.c              ft_memcmp.c             ft_strchr.c             ft_strnstr.c \
ft_calloc.c             ft_memcpy.c             ft_strdup.c             ft_strrchr.c \
ft_isalnum.c            ft_lstdelone_bonus.c    ft_memmove.c            ft_strjoin.c            ft_strtrim.c \
ft_isalpha.c            ft_lstlast_bonus.c      ft_memset.c             ft_strlcat.c            ft_substr.c \
ft_isascii.c            ft_lstnew_bonus.c       ft_putchar_fd.c         ft_strlcpy.c            ft_tolower.c \
ft_isdigit.c            ft_lstsize_bonus.c      ft_putnbr_fd.c          ft_strlen.c             ft_toupper.c \
ft_isprint.c            ft_memccpy.c            ft_putstr_fd.c          ft_strmapi.c			ft_putendl_fd.c ft_itoa.c

OBJS= $(SRCS:.c=.o)
$(NAME): $(SRCS) libft.h
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

.SILENT:${RULES}

all:${NAME}

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all