VPATH = src
CC = gcc -c
FLAGS = -Wall -pedantic -Werror -Wextra
SOURCE = 	print_char.c 4-positive_or_not.c 0-print_number.c 0-absolute.c 1-uppercase.c 0-lowercase.c 0-first_digit.c 1-swap_int.c 2-str_len.c 3-print_string.c\
 					4-reverse_string.c 5-string_to_integer.c 2-print_array.c 4-strings_compare.c 0-uppercase_string.c\
 					1-cap_string.c 1-power.c 2-square_root.c
OBJECT = $(SOURCE:.c=.o)
HEADF = inc/holbertonschool.h
FILE = libholbertonschool.a


all: $(FILE) clean

$(FILE): $(OBJECT)
	ar -rc $(FILE) $(OBJECT)
	ranlib $(FILE)

%.o : %.c
	$(CC) $(FLAGS) $< -o $@

clean:
	rm -rf $(OBJECT)

re: $(OBJECT)
