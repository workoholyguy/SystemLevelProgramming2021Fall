#include <stdio.h>
#include <problem5make.h>
int charCount(char* filename){
	FILE* fp;
	int count=0;
	/* opens file to read only to count amount of characters*/
	fp = fopen(filename,"r");
	char i;
	/* algorithm to count the characters */
	for(i=getc(fp); i != EOF; i = getc(fp)){
		count=count+1;
	}
	fclose(fp);
	return count;
}
