#include <stdio.h> 
 
 int main() { 
 
 int letters=0, space=0;
 int words=0; 
 char character=0; 
 
 printf("Enter a Sentence: "); 
 
while((character=getchar()) != '\n'){ 
if(character != ' '){ 
if(!space){ 
words++; 
space=1; 
} 
letters++; 
}else 
space = 0; 
} 
printf("Average word length : %.1f \n", (float)letters/words); 
return 0; 
}


//This program is used to calculate the  average word length for a     sentence (a string in a single line):

