#include <stdio.h>
#include "include/levenshtein_distance.h"

int main (){
	char word1[10] ;
	char word2[10] ;
	printf("Enter the first word");
	fgets(word2,10,stdin);
	printf("Enter the first word");
	fgets(word2,10,stdin);
	
	printf("%d \n",levenshtein_distance(word1,word2));
	return 0;
}
