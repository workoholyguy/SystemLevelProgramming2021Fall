
#include<stdio.h>                                                                                                                           
void main(int argc, char *argv[])                                                                                                           
{                                                                                                                                           
FILE *fp;// File pointer for Reading data from file through commandline arguments                                                                                                                 
char ch;// ch for reading characters from file.                                                                                                                 
char s[30]="abcdefghijklmnopqrstuvwxyz"; // all characters defined in the array list                                                                                           
int count[30],i,max=0,maxp=0;// count array variable is used to count total number of characters
// i for looping variable, max is to find maximum value
// maxp for find maximum value from count array.                                                
for(i=0;i<30;i++)                                                                                                                   
count[i]=0;//initially all characters count is set to Zero                                                             
fp=fopen(argv[1],"r");// open file in read mode Note: the file must be existed                                                                                                           
while((ch=getc(fp))!=EOF)// read characters from file until end of file                                                                                                         
{                 
putchar(ch);
for(i=0;s[i]!='\0';i++)// checking character is found in defined list or not                                                                                              
{                                                                                                                           
if(ch==s[i] || ch==(s[i]-32)) // if found then count s[i] is the actual small character
// s[i]-32 is the Capital Letter

count[i]++;                                                                                                         
}                                                                                                                           
}                                                                                                                                   
fclose(fp);// closing file                                                                                                                    
for(i=0;s[i]!='\0';i++)                                                                                                             
if(max<count[i])// finding maximum value in count array                                                                                                        
{
// if found then max and maxp will be changed
max=count[i];                                                                                                               
maxp=i;                                                                                                                     
}                                                                                                                                   
printf("\nThe Most frequent letter is '%c'. It appeared %d times.\n",s[maxp],max);//diaplaying output                                               
}

