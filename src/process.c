#include "../include/process.h"


output exsts(const char *input){
	
	output stuff;
	stuff.LowestDistance = NOT_FOUND;
	stuff.string[0]='\0';

	char word[WORD_SIZE];
	unsigned char CurrentDistance = 99;
	FILE *cache = fopen(CACHE_DIR,"r");
	if(!cache) perror("failed to load cache");
	
	while(fgets(word,WORD_SIZE,cache)){
		
		//removing next line character
		word[strcspn(word,"\n")] = '\0';
		CurrentDistance=levenshtein_distance(word,input);	

		if (CurrentDistance == 0){
			stuff.LowestDistance = CurrentDistance; 
			//copying the string with most similarity
			strncpy(stuff.string,word,WORD_SIZE);   
			stuff.string[WORD_SIZE-1] = '\0';
		}else if (stuff.LowestDistance > CurrentDistance){
			stuff.LowestDistance = CurrentDistance;
			//copying the string with most similarity
			strncpy(stuff.string,word,WORD_SIZE);   
			stuff.string[WORD_SIZE-1]='\0';
		}
	}
	fclose(cache);

	if (stuff.LowestDistance > 2) {
		stuff.LowestDistance = NOT_FOUND;
		stuff.string[0] = '\0';  //clearing the string
		return stuff;
	} else return stuff;
}
	
	
	
