#ifndef process_h
#define process_h

#include <stdio.h>
#include <string.h>
#include "levenshtein_distance.h"


#define CACHE_DIR "/home/paul/repo/personal/xpenses/test/cache"

#define NOT_FOUND 99
#define FOUND 0

typedef struct {
	int LowestDistance;  //0 if found and 1 or 2 if guessed basically levenshtein_distance
	char string[WORD_SIZE];   //correct word found
	}output;

output exsts(const char *input);

#endif
