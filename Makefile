NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_striteri.c\
		ft_strlcat.c\
		ft_strlen.c\
		ft_isalnum.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memcpy.c\
		ft_isascii.c\
		ft_bzero.c\
		ft_isalpha.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_split.c\
		ft_strmapi.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putstr_fd.c\
		ft_putnbr_fd.c


BNS =	ft_lstnew.c\
	 	ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c

OBJECTS = $(SRC:.c=.o)

OBJECTS2 = $(BNS:.c=.o)

INCLUDES = libft.h

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(OBJECTS) $(OBJECTS2)

fclean: clean
	rm -rf $(NAME)

re: fclean all

bonus : $(OBJECTS) $(OBJECTS2)
	ar rcs $(NAME) $(OBJECTS) $(OBJECTS2)
