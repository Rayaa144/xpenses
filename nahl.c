#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/levenshtein_distance.h"


#define CACHE_DIR "/home/paul/repo/personal/xpenses/test/cache"
#define WORD_SIZE 20

int main (){
	char input[WORD_SIZE];
	char found [WORD_SIZE];
	unsigned char CurrentDistance = 99 , LowestDistance =99 ;
	if(fgets(input,WORD_SIZE,stdin)==NULL){
		printf("Error readin text");
		return 1;
	}
	//remove trailing line **if any
	input[strcspn(input,"\n")]=0;

	FILE *cache = fopen(CACHE_DIR,"r");
	if (!cache){ 
		perror("failed to load cache");
	}		


	char word[WORD_SIZE];
	while(fgets(word,WORD_SIZE,cache)){
		word[strcspn(word,"\n")]=0;
		CurrentDistance = levenshtein_distance(word,input);
		if (CurrentDistance == 0){
			LowestDistance=CurrentDistance;
			strncpy(found,word,sizeof(found));
			found[sizeof(found)-1]=0;
			break;
		}else if (CurrentDistance < LowestDistance){ 
			LowestDistance=CurrentDistance;
			strncpy(found,word,sizeof(found));
			found[sizeof(found)-1]=0;
		}
	}
	if(LowestDistance==0){
		printf("exists");
	
	} else if(LowestDistance<=2) {
			printf("match found %s /n",found);
	} else { 
			printf("not found");
			

	}
	fclose(cache);
	
	return 0;
}
