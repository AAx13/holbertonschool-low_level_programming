
SRC = 0-absolute.c 0-contact_strings.c 0-first_digit.c 0-lowercase.c 0-print_number.c 0-uppercase_string.c 1-cap_string.c 1-nconcat_strings.c 1-power.c 1-swap_int.c 1-uppercase.c 2-print_array.c 2-square_root.c 2-str_len.c 2-string_copy.c 3-is_prime_number.c 3-print_string.c 3-string_ncopy.c 4-positive_or_not.c 4-reverse_string.c 4-strings_compare.c print_char.c
OBJ = $(SRC:.c=.o)   # (changes .c to .o)
CC = gcc
CFLAGS = -Wall -Werror -pedantic -Wextra -c
ARCHIVE = libholbertonschool.a
DEPS = inc/holbertonschool.h

all: $(ARCHIVE) re

$(ARCHIVE): $(OBJ)
				ar -rc $(ARCHIVE) $(OBJ)
				ranlib $(ARCHIVE)

%.o : src/%.c $(DEPS)
				$(CC) $(CFLAGS) $< -o $@

re: clean

clean:
				rm -f $(OBJ)
