#include <stdio.h>
#include <string.h>
#include "include/process.h"

int main() {
    char word[WORD_SIZE];
	output shit;


    printf("Enter the word: \n");
    if (fgets(word, sizeof(word), stdin) == NULL) {
        printf("Error reading the first word.\n");
        return 1;
    }

    // Remove trailing newlines if present
    word[strcspn(word, "\n")] = '\0';

	shit=exsts(word);

	if (shit.LowestDistance==FOUND) {
		printf("yess");
	}else if(shit.LowestDistance <= 2){
		printf("distance is %c \n ",shit.LowestDistance);
		printf("word found is %s \n",shit.string);
	}else printf("nahhhh");

    return 0;
}

