# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bford <bford@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 11:34:46 by bford             #+#    #+#              #
#    Updated: 2019/10/06 19:03:33 by bford            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

SOURCES_LIB = ./libft/ft_putstr_num.c ./libft/ft_putstr.c ./libft/ft_strlen.c

SOURCES_PRF = ./ft_printf/ft_c.c ./ft_printf/ft_clearlist.c \
			./ft_printf/ft_d_func.c ./ft_printf/ft_d.c \
			./ft_printf/ft_f_func.c \
			./ft_printf/ft_f.c ./ft_printf/ft_lennbr_d.c \
			./ft_printf/ft_lennbr_u.c ./ft_printf/ft_lstnew_pf.c \
			./ft_printf/ft_many_write.c ./ft_printf/ft_nollist.c \
			./ft_printf/ft_o_func.c ./ft_printf/ft_o.c \
			./ft_printf/ft_p_func.c ./ft_printf/ft_p.c \
			./ft_printf/ft_postwork.c ./ft_printf/ft_power.c \
			./ft_printf/ft_pr.c ./ft_printf/ft_printf.c \
			./ft_printf/ft_putnbr_d.c ./ft_printf/ft_putnbr_f.c \
			./ft_printf/ft_putnbr_o.c ./ft_printf/ft_putnbr_second.c \
			./ft_printf/ft_putnbr_u.c ./ft_printf/ft_putnbr_x.c \
			./ft_printf/ft_s.c ./ft_printf/ft_s2.c \
			./ft_printf/ft_start_work.c ./ft_printf/ft_u_func.c \
			./ft_printf/ft_u.c ./ft_printf/ft_x_func.c ./ft_printf/ft_x.c

OBJECTS = ft_c.o ft_clearlist.o ft_d_func.o ft_d.o ft_f_func.o \
			ft_f.o ft_lennbr_d.o ft_lennbr_u.o ft_lstnew_pf.o \
			ft_many_write.o ft_nollist.o ft_o_func.o ft_o.o \
			ft_p_func.o ft_p.o ft_postwork.o ft_power.o \
			ft_pr.o ft_printf.o ft_putnbr_d.o ft_putnbr_f.o \
			ft_putnbr_o.o ft_putnbr_second.o ft_putnbr_u.o \
			ft_putnbr_x.o ft_putstr_num.o ft_putstr.o \
			ft_s.o ft_s2.o ft_start_work.o ft_strlen.o \
			ft_u_func.o ft_u.o ft_x_func.o ft_x.o

SOURCES =	$(OBJECTS:.o=.c)

LIBFT =		./libft
FT_PRINTF =	./ft_printf

FLAGS =		-Wall -Werror -Wextra

NAME =		libftprintf.a

all:		$(NAME)

$(NAME):
			gcc $(FLAGS) -c $(SOURCES_LIB)
			gcc $(FLAGS) -c -I$(LIBFT) $(SOURCES_PRF)
			ar rcs libftprintf.a $(OBJECTS)
			ranlib libftprintf.a

$(OBJECTS):	%.o : %.c
			@gcc $(FLAGS) -c $< -o $@

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

ex:
			gcc -c $(LIBFT)/*.c
			gcc -c -I $(LIBFT) $(FT_PRINTF)/*.c
			gcc -c -I $(FT_PRINTF) -I $(LIBFT) main.c
			gcc *.o
			rm *.o
			./a.out

push:
			git add -A && git commit -ma && git push

va:
			valgrind --leak-check=full ./a.out