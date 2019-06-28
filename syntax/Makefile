# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: charoua <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/23 11:43:40 by charoua           #+#    #+#              #
#    Updated: 2019/06/23 19:26:26 by charoua          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-02

SRC		=	check_arg.c \
			ft_no_arg_syntax.c \
			ft_aff_solution_syntax.c \
			ft_find_nb.c \
			ft_stock_dico.c \
			ft_strdupp.c \
			number_syntax.c \
			main_syntax.c

OBJ =	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@gcc -Wall -Werror -Wextra $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
