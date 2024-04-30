# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 12:08:34 by pevangel          #+#    #+#              #
#    Updated: 2024/04/30 17:11:35 by pevangel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_PATH = lib/libft
LIBFT = $(LIBFT_PATH)/libft.a
PRINTF_PATH 	= 	lib/libft/ft_printf
PRINTF		= 	$(PRINTF_PATH)/libftprintf.a
HEADER = push_swap.h
HEADERBONUS = bonus/push_swap_bonus.h
CFLAGS = -Wall -Wextra -Werror -g

SRC_FILES = push_swap.c\
		checker_1.c\
		checker_2.c\
		checker_3.c\
		init.c\
		functions.c\
		operations.c\
		print_stacks.c
		

			
SRC_FILES_BONUS = bonus/push_swap_bonus.c
		

SOURCES = $(SRC_FILES)
SOURCES_BONUS = $(SRC_FILES_BONUS)

OBJECTS = $(SOURCES:.c=.o)
OBJECTSBONUS = $(SOURCES_BONUS:.c=.o)

NAME =	push_swap
NAMEBONUS = push_swap_bonus
			
CC = cc
RM = rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
all: $(NAME)
$(NAME): $(LIBFT) $(PRINTF) $(OBJECTS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJECTS) $(LIBFT) $(PRINTF) -o $(NAME)
$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)
$(PRINTF):
	$(MAKE) -C $(PRINTF_PATH)

bonus: $(NAMEBONUS)
$(NAMEBONUS): $(LIBFT) $(PRINTF) $(OBJECTSBONUS) $(HEADERBONUS)
	$(CC) $(CFLAGS) $(OBJECTSBONUS) $(LIBFT) $(PRINTF) -o $(NAMEBONUS)
clean:
			$(MAKE) -C $(LIBFT_PATH) clean
			$(MAKE) -C $(PRINTF_PATH) clean
			$(RM) $(OBJECTS)
			$(RM) $(OBJECTSBONUS)
fclean:		clean
			$(MAKE) -C $(LIBFT_PATH) fclean
			$(MAKE) -C $(PRINTF_PATH) fclean
			$(RM) $(NAME)
			$(RM) $(NAMEBONUS)
			
re:		fclean all

re_bounus:	fclean bonus

.PHONY: all clean fclean re bonus re_bonus libft printf
