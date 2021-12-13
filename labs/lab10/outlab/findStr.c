//Omar Madjitov
//omadjitov1@student.gsu.edu

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int i;
char smallest_word[20] = "z";
char largest_word[20] = "";
char word[20];
while(1){
printf("Enter word: ");
scanf("%s", word);
if(strlen(word) == 4)
break;
if(strcmp(word, smallest_word) < 0)
strcpy(smallest_word, word);
if(strcmp(word, largest_word) > 0)
strcpy(largest_word, word);
}
printf("\nSmallest word: %s\n", smallest_word);
printf("Largest word: %s\n", largest_word);
return 0;
}
