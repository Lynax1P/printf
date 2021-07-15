NAME = libftprintf.a
HEAD	=		ft_printf.h


LIST =			ft_printf.c \
				src/print_char.c\
				src/print_str.c\
				src/print_int.c\
				src/print_unsigned.c\
				src/print_hex.c\
				src/print_upper_hex.c\
				src/print_pointer.c

O_OBJ	= 	$(patsubst %.c,%.o,$(LIST))

CC		=	gcc
OPTFLAG	=	-O2
CFLAGS 	=	-Wall -Wextra -Werror


.PHONY =	all	clean fclean re

all		:  $(NAME)

$(NAME) :	$(O_OBJ) $(HEAD)
			ar rcs $(NAME) $?

%.o :	%.c
		$(CC) $(CFLAGS) $(OPTFLAG) -c $< -o $@

bonus :
		@make

clean :
	@rm -f $(O_OBJ)

fclean :	clean
	@rm -f $(NAME)
re :        fclean all