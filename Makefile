all:
	gcc -c src/*.c 
	gcc -c main.c -o main.o
	gcc *.o -o program
	./program
cl:
	rm *.o program prog 
