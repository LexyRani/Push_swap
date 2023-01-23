NAME = push_swap

#Sources

#****************************PARSING**************************#
SRCS += sources/Parsing/main.c
SRCS += sources/Parsing/exit.c
SRCS += sources/Parsing/parsing.c
SRCS += sources/Parsing/index.c

#****************************MOVE*****************************#
SRCS += sources/Move/push.c
SRCS += sources/Move/swap.c
SRCS += sources/Move/rotate.c
SRCS += sources/Move/reverse_rotate.c

#***************************SORTING***************************#
SRCS += sources/Sorting/push_swap.c 
SRCS += sources/Sorting/sort_big.c
SRCS += sources/Sorting/sort_small.c

#****************************UTILS****************************#
SRCS += sources/Utils/ft_atoi.c
SRCS += sources/Utils/ft_isdigit.c
SRCS += sources/Utils/ft_list.c
SRCS += sources/Utils/ft_putendl_fd.c
SRCS += sources/Utils/ft_putstr_fd.c

OBJS = $(SRCS:.c=.o)

HEADER = Includes/push_swap.h

#**************************Compilateurs***********************#
CC = cc
CFLAGS = -Wall -Wextra -Werror

#*****************************RULES***************************#

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