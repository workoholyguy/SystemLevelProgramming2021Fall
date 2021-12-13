//Omar Madjitov
//omadjitov1@student.gsu.edu
//omadjitov1
#include<stdio.h>
#include<string.h>

int main()
{
// 1)Declare variables 
char phone[18];
int i,j;
int phonelength;

// 2)Prompt the user to enter a phone number and store the value of phone string into phone and the length of a phone number into phonelength
printf("Enter phone number [(999)999-9999]:");
scanf("%s",phone);
phonelength=strlen(phone);

// 3)A nested loop  
for(i=0;i<=phonelength;i++) //For loop that ittirates through evry char in a phone number 
{
if(phone[i]=='(') // When a char that is being itterated is equal to '    ('
{
for(j=i;j<phonelength;j++)
{
phone[j]=phone[j+1]; //Replace it with a next char 
}
}
if(phone[i]==')') // When a char that is being itterated is equal to ')'
{
phone[i] = '-'; // Replace '(' with '-'
}
}

// 4)Print a result
printf("You Entered: ");
printf("%s \n",phone);

return 0;
}

