NAME = push_swap

#Sources

#****************************Parsing**************************#
SRCS += sources/Parsing/main.c
SRCS += sources/Parsing/errors.c
SRCS += sources/Parsing/parsing.c

#****************************Move*****************************#

#****************************Utils****************************#
SRCS += sources/Utils/ft_atoi.c
SRCS += sources/Utils/ft_isdigit.c
SRCS += sources/Utils/ft_lstclear.c
SRCS += sources/Utils/ft_lstdelone.c
SRCS += sources/Utils/ft_putendl_fd.c
SRCS += sources/Utils/ft_putstr_fd.c

OBJS = $(SRCS:.c=.o)

HEADER = Includes/push_swap.h

#INCLUDES_DIR = -I ./Includes/

# Compilateurs
CC = cc
CFLAGS = #-g -Wall -Wextra -Werror

#				##########   RULES   ##########             #

#all:			$(NAME) 

#$(NAME):		$(OBJS) $(HEADER)
#@$(CC)$(CFLAGS) $(OBJS)  -o push_swap

#clean:
#$(RM) $(OBJS)

#fclean:			clean
#				$(RM) $(NAME)

#re:				fclean $(NAME)

#.PHONY:			all clean fclean re bonus

all: $(NAME)
$(NAME): $(OBJS) $(HEADER)
		${CC} ${SRCS} -o ${NAME} ${CFLAGS} ${INCLUDES_DIR}

%.o: %.c $(HEADER)
	$(CC) -o $@ -c $< $(CFLAGS) $(INCLUDES_DIR)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)
			

re: fclean all

.PHONY: all clean fclean re