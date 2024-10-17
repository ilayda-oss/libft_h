NAME	=	libft.a

SRCS	=	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c

OBJS = $(SRCS:.c=.o)


CC	=	gcc
RM	=	rm -f
FLAGS	= -Wall -Wextra -Werror

$(NAME): 
		$(CC) $(FLAGS) -c $(SRCS) 
		ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS) 
		$(RM) $(BONUS_OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re