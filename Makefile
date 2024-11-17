all:
	gcc -c src/levenshtein_distance.c 
	gcc -c src/process.c 
	gcc -c main.c -o main.o
	gcc levenshtein_distance.o main.o process.o -o program
	./program
cl:
	rm *.o program prog 
