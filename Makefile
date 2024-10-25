all:
	gcc -c include/levenshtein_distance.c -o include/levenshtein_distance.o
	gcc -c main.c -o main.o
	gcc include/levenshtein_distance.o main.o -o program
	./program
cl:
	rm include/levenshtein_distance.o
