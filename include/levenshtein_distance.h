#ifndef	Levenshtein_h 
#define	Levenshtein_h 

#include <string.h>
#include <stdlib.h>

#define WORD_SIZE 20
int min (short a , short b , short c);
int levenshtein_distance(const char *str1, const char *str2);


#endif
