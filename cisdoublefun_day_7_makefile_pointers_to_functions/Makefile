SRC = 0-factorial.c 0-print_alphabet.c 0-string_copy.c 0-swap_int.c 1-factorial.c 1-print_string.c 1-print_tebahpla.c 1-string_ncopy.c 2-power.c 2-rev_string.c 2-str_len.c 3-power.c 3-print_base16.c 3-rev_string.c 4-positive_or_not.c 4-square_root.c 4-strings_compare.c 4-string_to_integer.c 5-odd.c 5-square_root.c 6-print_triangle.c 6-uppercase_string.c 7-lowercase_string.c 8-cap_string.c 8-print_number.c 9-string_alpha.c absolute.c first_digit.c lowercase.c print_array.c print_char.c print_string.c reverse_string.c string_to_integer.c uppercase.c
OBJ = $(SRC:.c=.o)   # (changes .c to .o)
CC = gcc
CFLAGS = -Wall -Werror -pedantic -Wextra -c

all: libholbertonschool.a re

libholbertonschool.a : $(OBJ)
	ar -rc libholbertonschool.a $(OBJ)
	ranlib libholbertonschool.a

%.o : src/%.c inc/holbertonschool.h
	$(CC) $(CFLAGS) $< -o $@

re: clean

clean:
	rm -f $(OBJ)
