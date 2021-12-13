//Omar MadjitoOBLEM 3 OUTPUT:
//omadjitov1@student.gsu.edu
//omadjitov1
#include<stdio.h>
#include<stdlib.h>

sort_numeric(int size, int* arr, char check)
{
int i, j, temp;
// Checking to see if the user wants to sort in ascending order
if(check == 'A' || check == 'a')
{
//Sorting the array in ascending order
for(i = 0; i < size; i++)
{
for(j = i + 1; j < size; j++)
{
if(*(arr + j) < *(arr + i))
{
temp = *(arr + i);
*(arr + i) = *(arr + j);
*(arr + j) = temp;
}
}
}
}
// Checking to see if the user wants to sort in descending order
if(check == 'D' || check == 'd')
{
// Sorting the array in descending order
for(i = 0; i < size; i++)
{
for(j = i + 1; j < size; j++)
{
if(*(arr + i) < *(arr + j))
{
temp = *(arr + i);
*(arr + i) = *(arr + j);
*(arr + j) = temp;
}
}
}
}
// Prints newly sorted array
for(i = 0; i < size; i++)
{
printf("%d ", *(arr + i));
}
printf("\n");
}

//Driver programm
int main()
{
int *arr, i, size;
// Scanning the size of the array
printf("Check the number of enteries(10-30): \n");
scanf("%d", &size);
// Allocating the size to the array
arr = (int *)malloc(size *sizeof(int));
printf("Enter %d numeric values(press ENTER after inputting each value): \n", size);
// Scanning user's check and using it as a value of the array
for(i = 0; i < size; i++)
{
scanf("%d", (arr+i));
}
// Taking usser's check  and use it to tell the programm whether to sort in ascending or descending order
char check;
printf("enter A to sort in ascending order or D for descending: \n");
scanf("\n%c", &check);
// Output
sort_numeric(size, arr, check);
return 0;
}




