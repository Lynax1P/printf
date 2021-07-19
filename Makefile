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


.PHONY =	all	clean fclean re bonus test

all		:  $(NAME)

$(NAME) :	$(O_OBJ) $(HEAD)
			ar rcs $(NAME) $?

%.o :	%.c
		$(CC) $(CFLAGS) $(OPTFLAG) -c $< -o $@

bonus :
		@make
test :	
		$(CC) $(LIST) -o test 
		./test > out_ft_printf.txt
		@make clean
		$(CC) print.c -o test 
		./test > out_printf.txt
		diff out_printf.txt out_ft_printf.txt > diff.txt 
		@a=1;
clean :
	@rm -f $(O_OBJ)
	@rm -f test

fclean :	clean
	@rm -f $(NAME) out_ft_printf.txt out_printf.txt diff.txt
re :        fclean all