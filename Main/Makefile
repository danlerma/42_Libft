# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlerma-c <dlerma-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 14:41:51 by dlerma-c          #+#    #+#              #
#    Updated: 2022/10/03 14:41:53 by dlerma-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = comprobacion

SRC = main.c comIsalpha.c comIsdigit.c comIsalnum.c comIsascii.c \
	comIsprint.c comStrlen.c comMemset.c comBzero.c comMemcpy.c \
	comMemmove.c comStrlcat.c comToupper.c comTolower.c \
	comStrchr.c comStrrchr.c comStrncmp.c comMemchr.c comMemcmp.c \
	comAtoi.c comCalloc.c comStrdup.c comStrlcpy.c comStrnstr.c \
	comSubstr.c comStrtrim.c comSplit.c comItoa.c comStrjoin.c

FILE_DIR = ../Libft

CFLAGS = -Wall -Wextra -Werror -pedantic -O3

OBJS = $(SRC:.c=.o)

.PHONY: clean all re

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[1;94mRedirigiendo\033[0m"
	cd $(FILE_DIR) && $(MAKE)

%.o : %.c comprobacion.h $(FILE_DIR)/libft.h
	gcc $(CFLAGS) -c $< -o $@

run: all
	@tput setaf 153;
	@echo "Creating a.out file"
	@tput init;
	gcc  $(CFLAGS) $(SRC) $(FILE_DIR)/libft.a -g3 -o a.out  
	./a.out $(filter-out $@,$(MAKECMDGOALS))

clean: 
	@echo "\033[1;92mCLEAN\033[0m"
	cd $(FILE_DIR) && $(MAKE) fclean
	rm -rf $(OBJS)

fclean:	clean
	rm -rf a.out

re:	fclean all
