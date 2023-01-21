NAME = push_swap

#Sources

#****************************Parsing**************************#
SRCS += sources/Parsing/main.c
SRCS += sources/Parsing/exit.c
SRCS += sources/Parsing/parsing.c
SRCS += sources/Parsing/index.c

#****************************Move*****************************#
SRCS += sources/Move/push.c
SRCS += sources/Move/swap.c
SRCS += sources/Move/rotate.c
SRCS += sources/Move/reverse_rotate.c

#***************************Sorting***************************#
SRCS += sources/Sorting/sort_big.c
SRCS += sources/Sorting/sort_small.c

#****************************Utils****************************#
SRCS += sources/Utils/ft_atoi.c
SRCS += sources/Utils/ft_isdigit.c
SRCS += sources/Utils/ft_list.c
SRCS += sources/Utils/ft_lstdelone.c
SRCS += sources/Utils/ft_putendl_fd.c
SRCS += sources/Utils/ft_putstr_fd.c

OBJS = $(SRCS:.c=.o)

HEADER = Includes/push_swap.h

#INCLUDES_DIR = -I ./Includes/

# Compilateurs
CC = cc
CFLAGS = -g -Wall -Wextra -Werror

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