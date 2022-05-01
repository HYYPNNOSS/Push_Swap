SRCS = ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_calloc.c ft_strdup.c ft_isalpha.c ft_isdigit.c ft_memset.c ft_isalnum.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_itoa.c ft_split.c
NAME = libft.a
INCLUDE = libft.h
CFLAGS = gcc -Wall -Wextra -Werror
OBJ = $(SRCS:.c=.o)

.PHONY: clean fclean re all

all: $(NAME)


$(NAME): $(OBJ)
	ar rc $@ $^

%.o : %.c $(INCLUDE)
	$(CFLAGS) -c $<

clean:
	rm  -rf $(OBJ)

fclean: clean
	rm  -rf $(NAME)

re:	fclean all
