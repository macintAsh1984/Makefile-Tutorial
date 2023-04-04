all: add.o main.o letsAdd

add.o: add.c
	gcc -Wall -Werror -c add.c -o add.o
main.o: main.c
	gcc -Wall -Werror -c main.c -o main.o
letsAdd: add.o main.o
	gcc -Wall -Werror add.o main.o -o letsAdd
clean:
	rm -f *.o letsAdd
