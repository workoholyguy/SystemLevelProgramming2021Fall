#include <stdio.h>
#include<problem6char.h>
#include<problem6words.h>
#include<problem6lines.h>
int main(){
	/* opens the midterm2.txt file as write only */
	FILE* fp; 
	char* filename="myexamfile1txt";
	fp=fopen(filename, "w");
	/* writes the output to the file */
	fprintf(fp, "\nchar=%d, word=%d, line=%d\n", charCount(filename), wordCount(filename), lineCount(filename));
	/* prints out to the terminal */
	printf("\n char=%d, word=%d, line=%d\n", charCount(filename), wordCount(filename), lineCount(filename));
	return 0;
}
