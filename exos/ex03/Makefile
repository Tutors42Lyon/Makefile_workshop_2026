all: srcs/count_number.o srcs/print_hello.o srcs/main.o
	cc srcs/count_number.o srcs/print_hello.o srcs/main.o -o test

srcs/count_number.o: srcs/count_number.c
	cc -c srcs/count_number.c -o srcs/count_number.o

srcs/print_hello.o: srcs/print_hello.c
	cc -c srcs/print_hello.c -o srcs/print_hello.o

srcs/main.o: srcs/main.c
	cc -c srcs/main.c -o srcs/main.o

clean:
	rm -rf srcs/*.o

fclean: clean
	rm -rf test
