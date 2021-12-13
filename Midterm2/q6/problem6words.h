#include<stdio.h>
#include<stdlib.h>
int wordCount(char* filename){
	FILE* fp;
	int count=0;
	char i;
	/* opens file to read only to count how many words there are */
	fp = fopen(filename, "r");
	/* algorithm to count how many words there are */
	while((i=fgetc(fp)) != EOF){
		if(i==' ' || i == '\n'){
			count++;
		}
	}
	fclose(fp);
	return count;
}
