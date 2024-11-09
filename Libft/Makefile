NAME = libft.a

MY_SOURCES = ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigi.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove(don't work).c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

INCLUDES = includes

all : $(NAME)

$(NAME) : $(MY_OBJECTS)
	ar rcs libft.a $(MY_OBJECTS)

$(MY_OBJECTS) : $(MY_SOURCES) $(INCLUDES)/libft.h
	cc -Werror -Wextra -Wall -I $(INCLUDES) -c -o $@ $< 

clean :
	rm -f $(MY_OBJECTS)

fclean : clean
	rm -f $(NAME)

re	: fclean all
