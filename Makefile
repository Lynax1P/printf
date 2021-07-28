NAME = libftprintf.a
HEAD	=		ft_printf.h


LIST =			ft_printf.c \
				print_c_s_i_d.c\
				print_h_uph_p.c\

O_OBJ	= 	$(patsubst %.c,%.o,$(LIST))

CC		=	gcc
OPTFLAG	=	-O2
CFLAGS 	=	-Wall -Wextra -Werror


.PHONY =	all	clean fclean re bonus test

all		:  $(NAME)

$(NAME) :	$(O_OBJ) $(HEAD)
			ar rcs $(NAME) $?

%.o :	%.c
		$(CC) $(CFLAGS) $(OPTFLAG) -c $< -o $@

bonus :
		@make
test :	all
		$(CC) $(CFLAGS) $(LIST) -o test
clean :
	@rm -f $(O_OBJ)
	@rm -f test

fclean :	clean
	@rm -f $(NAME)
re :        fclean all