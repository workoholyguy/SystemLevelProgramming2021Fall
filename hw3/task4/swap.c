
//OMAR MADJITOV
//002511575

#include<stdio.h>
#include<stdlib.h>

//main function
int main()
{

//declaraing our two strings 
char *string1 = malloc(sizeof(char) * 10000000);

char *string2 = malloc(sizeof(char) * 10000000);

//asking string one 
printf("Please enter the string one: ");
scanf("%[^\n]%*c",string1);

//asking string two 
printf("Please enter the string two: ");
scanf("%[^\n]%*c",string2);

//printing strings before swapping 
printf("\nThe string1 before swapping is : %s ",string1);
printf("\nThe string2 before swapping is : %s ",string2);

//new line 
printf("\n");

//subtracting string1 and string2 and adding string1
string1=string1+(string1-string2);
//subtracting string1 and string2 and dividing by 2 and subtracting from string 1 
string2=string1-(string1-string2)/2;
//subtracting string1 and string2 and multiplying by 2 and subtracting from string 1 
string1=string1-(string1-string2)*2;

//printing strings after swapping 
printf("\nThe string1 after swapping is : %s ",string1);
printf("\nThe string2 after swapping is : %s ",string2);


return 0; 
return 0;

}
