# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/03 16:49:10 by marvin            #+#    #+#              #
#    Updated: 2025/12/03 16:49:10 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone 
SRC = megaphone.cpp
OBJS = $(SRC:.cpp=.o)
COMPILE = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
EXE_NAME = -o megaphone
EXEC = megaphone


all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)

re: fclean all

.cpp.o:
	$(COMPILE) $(FLAGS) -c $< -o  ${<:.cpp=.o}

.PHONY:	all clean fclean re