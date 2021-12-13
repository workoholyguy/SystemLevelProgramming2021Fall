//OMAR MADJITOV
//002511575
//
#include <stdio.h>
#include<string.h>

int isPalindrome(char arr[])
{
        int size = strlen(arr);

        int i = 0,j = size-1;

        for(i= 0;i<j;)
	{

            if(arr[i]==' ')
		{
                i++;
                continue;
        	}

            if(arr[j] == ' ')
		{
                j--;
                continue;
            	}

            if(arr[i] != arr[j])
		{
		return 0;
                }

                i++;

                j--;

        }
        return 1;
}

int main() 
{
        int n,i;
        char arr[200];

        printf("Enter string: ");
        scanf(" %[^\n]s",arr);

        if(isPalindrome(arr) == 1)
                printf("It's a palindrome\n");

        else
                printf("It's not a palindrome\n");

        return 0;
}
