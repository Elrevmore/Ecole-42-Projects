NAME = libftprintf.a

LIBFT = libft/libft.a

SRCS = ft_printf.c\
	ft_printf_funcs.c
	ft_printf_hex.c\
	ft_printf_ptr.c\
	ft_printf_uns.c\

OBJS = $(SRCS:.c=.o)
LIBC = ar rc
CC = cc
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)
$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
