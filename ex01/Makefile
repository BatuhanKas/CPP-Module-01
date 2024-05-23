# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 16:55:08 by bkas              #+#    #+#              #
#    Updated: 2024/05/23 17:11:04 by bkas             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = Zombie

SRC         = zombieHorde.cpp main.cpp Zombie.cpp

SRCDIR      = ./src/

OBJDIR      = ./src/obj

OBJ         = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(BASE)))

BASE        = $(basename $(notdir $(SRC)))

CC          = c++ -Wall -Wextra -Werror -std=c++98

CFLAGS      = -g

RM          = rm -f

ECHO        = echo

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@$(ECHO) "\033[0;32m> Zombie Project Compiled\033[0m"

$(OBJDIR):
	@test -d $(OBJDIR) || mkdir $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	@$(CC) $(CFLAGS) -c -o $@ $< \
	&& $(ECHO) "\033[1;37m[C++] : Compiled $(notdir $<) [\033[0;32mOK\033[1;30m]\033[0m" \
	|| $(ECHO) "\033[1;37m[C++] : Compiled $(notdir $<) [\033[0;7;31mError\033[0;1;30m]\033[0m"

clean:
	@$(RM) -r $(OBJDIR)
	@$(ECHO) "\033[0;34m> Zombie Directory cleaned\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@$(ECHO) "\033[0;35m> Zombie Binaries removed\033[0m"

re: fclean all

.PHONY: all clean fclean re
