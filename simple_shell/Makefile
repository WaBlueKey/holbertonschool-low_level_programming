all:
	gcc main.c functions/my_functions.h functions/read_cmd.c \
	functions/num_to_str.c functions/builtin.c functions/environment.c \
	functions/executables.c functions/exists.c functions/path.c \
	functions/print_char.c functions/prompt.c functions/print_num.c \
	functions/concactenate.c functions/string_length.c \
	functions/string_ncomp.c \
	-Wall -Werror -Wextra -pedantic -Llibshell -lshell -o ourshell

clean:
	rm -f *.o functions/*.o
