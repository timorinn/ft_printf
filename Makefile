# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bford <bford@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 11:34:46 by bford             #+#    #+#              #
#    Updated: 2019/09/29 21:54:25 by bford            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT =		./libft
FT_PRINTF =	./ft_printf

FLAGS =		-Wall -Werror -Wextra

OBJECTS =	$(SOURCES:.c=.o)

NAME =		libftprintf.a

all:		
			gcc $(FLAGS) -c $(LIBFT)/*.c
			gcc $(FLAGS) -c -I$(LIBFT) $(FT_PRINTF)/*.c
			ar rcs $(NAME) *.o
			ranlib $(NAME)

clean:		
			/bin/rm -f *.o

fclean: 	clean
			/bin/rm -f $(NAME)

re:			fclean all

norm:		
			norminette $(LIBFT) $(FT_PRINTF)

exe:
			gcc $(FLAGS) -c $(LIBFT)/*.c
			gcc $(FLAGS) -c -I $(LIBFT) $(FT_PRINTF)/*.c
			gcc $(FLAGS) -c -I $(FT_PRINTF) -I $(LIBFT) main.c
			gcc $(FLAGS) *.o
			rm *.o
			./a.out
push:
			git add -A && git commit -ma && git push
