#include <stdio.h>
#include <problem5make.h>
int lineCount(char* filename){
	FILE* fp;
	int count=0;
	char i;
	/* opens file to read only to count how many lines there are */
	fp=fopen(filename,"r");
	/* algorithm to count how many lines there are in the txt file */
	for(i=getc(fp);i!=EOF; i=getc(fp)){
		if(i=='\n'){
			count=count+1;
		}
	}
	fclose(fp);
	return count;
}
