//Omar Madjitov
//omadjitov1@student.gsu.edu
//omadjitov1
#include<stdio.h>

// 1) Function to sort the array
void sort_numeric(double *a, char c)
{
int i, j;
int size=11;
// 1.A nested loop to sort the array
for( i = 0; i < size; i++ ) 
{
	for( j = 1; j < size - i;j++ ) 
	{
	// 2. Sort in ascenidng order
	if( (*(a + j - 1)) > (*(a + j)) && (c=='A'|| c=='a'))
	{
	swap_double( (a + j - 1), (a + j) );
	}
	// 3. Sort in descenidng order
	else if(( *(a + j - 1)) < (*(a + j)) && (c=='D'||c=='d'))
	{
	swap_double( (a + j - 1), (a + j) );
	}
	}
}
}

// 2) Function to swap elements of the array using pointers 
void swap_double(double *a, double *b)
{
double _t= *a;
*a=*b;
*b= _t;
}


// 3)Main function where the execution starts
int main()
{
// 1.Declare the array
 double arr[11]={10,0.25,-2342.0,12123,3.145435,6,6,5.999,-2,-5,-109.56};
// 2.Prompting the user
printf("Here's an array that we need to sort:\n\n");
printf("[10,0.25,-2342.0,12123,3.145435,6,6,5.999,-2,-5,-109.56]\n\n");
printf("Choose whether the array should be sorted in ascending or in a descending order:\n");
printf("Sort in asscending order:   A or a\n");
printf("Sort in descending order:   D or d\n");

// 3.Declaring the var to store user's input
char c;

// 4.Storing user's input
scanf("%c",&c);
sort_numeric(arr,c);
printf("Sorted array:\n");
int i;

// 5.Loop to print each value of a sorted array
	for(i=0;i<11;i++)
	{
	printf(" %lf",arr[i]);
	}
printf("\n");
}

