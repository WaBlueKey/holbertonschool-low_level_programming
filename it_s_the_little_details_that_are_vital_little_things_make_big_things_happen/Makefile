CC = gcc -c
FLAGS = -Wall -pedantic -Werror -Wextra
FILES = 0-absolute.o 0-print_number.o 1-power.o 2-square_root.o 3-print_string.o 4-strings_compare.o \
	print_char.o 0-contact_strings.o 0-uppercase_string.o 1-swap_int.o 2-str_len.o 3-string_ncopy.o \
	5-reverse_array.o 0-first_digit.o 1-cap_string.o 1-uppercase.o 2-string_copy.o 4-positive_or_not.o \
	5-string_to_integer.o 0-lowercase.o 1-nconcat_strings.o 2-print_array.o 3-is_prime_number.o \
        4-reverse_string.o
HEADF = inc/my_functions.h

.PHONY: clean re

all: libholbertonschool.a clean 

libholbertonschool.a: $(FILES)
	ar -rc libholbertonschool.a $(FILES)

0-absolute.o: src/0-absolute.c $(HEADF)
	$(CC) $(FLAGS) src/0-absolute.c $(HEADF)
0-print_number.o: src/0-print_number.c $(HEADF)
	$(CC) $(FLAGS) src/0-print_number.c $(HEADF)	
1-power.o: src/1-power.c $(HEADF)
	$(CC) $(FLAGS) src/1-power.c $(HEADF)		
2-square_root.o: src/2-square_root.c $(HEADF)
	$(CC) $(FLAGS) src/2-square_root.c $(HEADF)
3-print_string.o: src/3-print_string.c $(HEADF)
	$(CC) $(FLAGS) src/3-print_string.c $(HEADF)
4-strings_compare.o: src/4-strings_compare.c $(HEADF)
	$(CC) $(FLAGS) src/4-strings_compare.c $(HEADF)
print_char.o: src/print_char.c $(HEADF)
	$(CC) $(FLAGS) src/print_char.c $(HEADF)
0-contact_strings.o: src/0-contact_strings.c $(HEADF)
	$(CC) $(FLAGS) src/0-contact_strings.c $(HEADF)
0-uppercase_string.o: src/0-uppercase_string.c $(HEADF)
	$(CC) $(FLAGS) src/0-uppercase_string.c $(HEADF)
1-swap_int.o: src/1-swap_int.c $(HEADF)
	$(CC) $(FLAGS) src/1-swap_int.c $(HEADF)
2-str_len.o: src/2-str_len.c $(HEADF)
	$(CC) $(FLAGS) src/2-str_len.c $(HEADF)
3-string_ncopy.o: src/3-string_ncopy.c $(HEADF)
	$(CC) $(FLAGS) src/3-string_ncopy.c $(HEADF)
5-reverse_array.o: src/5-reverse_array.c $(HEADF)
	$(CC) $(FLAGS) src/5-reverse_array.c $(HEADF)
0-first_digit.o: src/0-first_digit.c $(HEADF)
	$(CC) $(FLAGS) src/0-first_digit.c $(HEADF)
1-cap_string.o: src/1-cap_string.c $(HEADF)
	$(CC) $(FLAGS) src/1-cap_string.c $(HEADF)
1-uppercase.o: src/1-uppercase.c $(HEADF)
	$(CC) $(FLAGS) src/1-uppercase.c $(HEADF)
2-string_copy.o: src/2-string_copy.c $(HEADF)
	$(CC) $(FLAGS) src/2-string_copy.c $(HEADF)
4-positive_or_not.o: src/4-positive_or_not.c $(HEADF)
	$(CC) $(FLAGS) src/4-positive_or_not.c $(HEADF)
5-string_to_integer.o: src/5-string_to_integer.c $(HEADF)
	$(CC) $(FLAGS) src/5-string_to_integer.c $(HEADF)
0-lowercase.o: src/0-lowercase.c $(HEADF)
	$(CC) $(FLAGS) src/0-lowercase.c $(HEADF)
1-nconcat_strings.o: src/1-nconcat_strings.c $(HEADF)
	$(CC) $(FLAGS) src/1-nconcat_strings.c $(HEADF)
2-print_array.o: src/2-print_array.c $(HEADF)
	$(CC) $(FLAGS) src/2-print_array.c $(HEADF)
3-is_prime_number.o: src/3-is_prime_number.c $(HEADF)
	$(CC) $(FLAGS) src/3-is_prime_number.c $(HEADF)
4-reverse_string.o: src/4-reverse_string.c $(HEADF)
	$(CC) $(FLAGS) src/4-reverse_string.c $(HEADF)

clean:
	rm -rf $(FILES)

re: $(FILES)
