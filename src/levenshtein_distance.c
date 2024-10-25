#include "../include/levenshtein_distance.h"


int min (short a,
	 short b,
	 short c){
	short minimum =a;
	if (b<minimum) minimum = b;
	if (c<minimum) minimum = c;
	return minimum;
}


int levenshtein_distance (const char *str1,const char *str2){
	unsigned char len1=strlen(str1);
	unsigned char len2=strlen(str2);


	unsigned char rows=len1+1;
	unsigned char colomn= len2+1;

	unsigned char **table = malloc(rows * sizeof(unsigned char*));
	for (short i =0;i < rows ;i++)
		table[i] = malloc(colomn * sizeof(unsigned char));
	

	for (short i = 0;i < rows; i++)
      		table[i][0]=i;
	for (short j = 0;j < colomn; j++)
      		table[0][j]=j;
	

	

	for (short i = 1;i < rows; i++){
		for (short j = 1;j < colomn; j++){
      			if(str1[i-1] == str2[j-1]){
      					table[i][j]=table[i-1][j-1];
			}else{
      				unsigned char delete_cost = table[i-1][j] +1;
      				unsigned char insert_cost = table[i][j-1] +1;
      				unsigned char replace_cost = table[i-1][j-1] +1;
				
      				table[i][j] = min (delete_cost,insert_cost,replace_cost);
      				}
      		}
	}
	unsigned char distance = table[len1][len2];
	for(unsigned char i = 0; i < rows; i++) {
     		free(table[i]);
	}
	free(table);
	return  distance ;
}
