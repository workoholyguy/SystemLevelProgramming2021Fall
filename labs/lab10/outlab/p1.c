//Omar Madjitov
//omadjitov1@student.gsu.edu

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* strcpy(char* strDest, const char* strSrc)
{
int i;
for(i = 0; i < strlen(strSrc); i++)
strDest[i] = strSrc[i];
return strDest;
}
int main()
{
char result[6];
strcpy(&result, "hello\n");
printf("%s", result);
return 0;
}
