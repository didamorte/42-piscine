#Nomes#
NAME = ft_display_file

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -rf

SRCS	= ft_display_file.c

#transformacao#
OBJ = $(SRCS:.c=.o)

#Regras#
all: $(NAME)

clean: 
		$(RM) $(OBJ)

fclean: clean 
		$(RM) $(NAME)

#Compilacao#
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

#Anti-Confusao#
.PHONY: all clean fclean re