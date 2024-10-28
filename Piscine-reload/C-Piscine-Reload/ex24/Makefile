#Nomes#
NAME = libft.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar 
ARFLAGS	= -rc
RM	= rm -rf

SRCS	= srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

#transformacao#
OBJ = $(SRCS:.c=.o)

#Regras#
all: $(NAME)

clean: 
		$(RM) $(OBJ)

fclean: clean 
		$(RM) $(NAME)

re: fclean all

#Compilacao#
$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Anti-Confusao#
.PHONY: all clean fclean re