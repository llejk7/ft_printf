# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krenken <krenken@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 16:34:49 by krenken           #+#    #+#              #
#    Updated: 2024/07/26 17:03:54 by krenken          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME		= libftprintf.a
SRCS		= $(wildcard *.c)
OBJS		= $(SRCS:.c=.o)
OBJSL		= $()
EXE			= $(shell find . -type f -perm -111)
CC			= cc
CFLAGS		= -Wall -Wextra -Werror 
LIBFT		= libft

# Default target 
all: $(NAME)

# Build the static libary 
$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@mv libft.a $(NAME)
	ar rc $(NAME) $(OBJS)

# Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OBJS)

# Clean and remove the libary
fclean: clean
	rm -f $(OBJS) $(NAME)

# Clean all
fcleanall: fclean
	rm -f $(OBJS) $(NAME) $(EXE)

# Rebuild everything
re: fclean all

# Declare non-file targets
.PHONY: all clean fclean re
