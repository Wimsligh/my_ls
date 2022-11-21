##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC = my_ls.c \
	main.c \
	flag_check.c \
	dir_f.c \
	flag_check_2.c \
	flag/flag_d_simple.c \
	flag/flag_a_simple.c \
	flag/flag_t_simple.c \
	flag/flag_l_simple.c \
    my_printf/cond1.c \
	my_printf/cond2.c \
	my_printf/cond3.c \
	my_printf/cond4.c \
	my_printf/cond5.c \
	my_printf/get_precision.c \
	my_printf/my_digit.c \
	my_printf/my_printf.c \
	my_printf/my_put_bin.c \
	my_printf/my_put_float.c \
	my_printf/my_put_hexa_float.c \
	my_printf/my_put_hexa_maj.c \
	my_printf/my_put_hexa_min.c \
	my_printf/my_put_nbr_count.c \
	my_printf/my_put_nbr.c \
	my_printf/my_put_octet.c \
	my_printf/my_put_pointer.c \
	my_printf/my_put_scientific_maj.c \
	my_printf/my_put_scientific_min.c \
	my_printf/my_put_short_maj.c \
	my_printf/my_put_short_min.c \
	my_printf/my_put_str_s.c \
	my_printf/my_put_unsigned.c \
	my_printf/my_putchar.c \
	my_printf/my_putstr.c \
	my_printf/my_str_min.c \
	my_printf/my_strlen.c \
	my_printf/tableau.c

OBJ = $(SRC:.c=.o)

NAME = my_ls

all: $(NAME)

$(NAME): $(OBJ)
			gcc -o $(NAME) $(OBJ)

clean :
			rm -f *.o

fclean:
			rm -f *.o
			rm -f *.a
			rm -f ../.a
			rm -f my_printf/*.o
			rm -f flag/*.o

re: fclean all
