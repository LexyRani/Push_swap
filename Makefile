# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 16:21:53 by aceralin          #+#    #+#              #
#    Updated: 2022/12/05 22:05:20 by aceralin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#PATHS
SRCS_PATH	 	=	sources/
INC_PATH		=	Includes/
OBJ_PATH		=	obj/
PARSING_PATH	=	$(SRCS_PATH)Parsing/
MOVE_PATH		=	$(SRCS_PATH)Move/
SORTING_PATH	=	$(SRCS_PATH)Sorting/
UTILS_PATH		=	$(SRCS_PATH)Utils/

#SOURCES
PARSING_SRC		=	main.c \
					parsing.c \
					
#MOVE_SRC		=

#SORTING_SRC		=

UTILS_SRC		=	ft_atoi.c \
					ft_isdigit.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_putendl_fd.c \
					ft_putstr_fd.c \

PARSING      = $(addprefix $(PARSING_SRC), $(PARSING_PATH))
MOVE         = $(addprefix $(MOVE_SRC), $(MOVE_PATH))
SORTING      = $(addprefix $(SORTING_SRC), $(SORTING_PATH))
UTILS        = $(addprefix $(UTILS_SRC), $(UTILS_PATH))
PARSING_OBJ  = $(PARSING_SRC:.c=.o)
MOVE_OBJ     = $(MOVE_OBJ: .c=.o)
SORTING_OBJ  = $(SORTING_SRC: .c=.o)
UTILS_OBJ    = $(UTILS_SRC: .c=.o)

PARSING_OBJS = $(addprefix $(PARSING_PATH), $(PARSING_OBJ))
MOVE_OBJS    = $(addprefix $(MOVE_PATH), $(MOVE_OBJ))
SORTING_OBJS = $(addprefix $(SORTING_PATH), $(SORTING_OBJ))
UTILS_OBJS   = $(addprefix $(UTILS_PATH), $(UTILS_OBJ))

#BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= push_swap

all:			$(NAME)

$(NAME):	$(OBJS) push_swap.h
				$(CC) $(OBJS) -I $(INC_PATH) -o $(NAME) 

clean:
				$(RM) $(OBJS) #$(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

#bonus:			$(OBJS) $(BONUS_OBJS)
#				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus