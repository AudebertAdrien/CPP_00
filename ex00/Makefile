# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: motoko <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 14:26:47 by motoko            #+#    #+#              #
#    Updated: 2024/01/15 16:19:36 by motoko           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:= megaphone

SRCS_DIR		:= srcs
OBJS_DIR		:= objs

VPATH			:= $(SRCS_DIR):

SRCS			:= megaphone.cpp

CC				:= g++
CFLAGS`			:= -g -Wall -Werror -Wextra 

ifdef STD
CFLAGS			+= -std=$(STD)
else
CFLAGS			+= -std=c++98
endif

RM				:= rm -rf

OBJS			:= $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@	

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re
