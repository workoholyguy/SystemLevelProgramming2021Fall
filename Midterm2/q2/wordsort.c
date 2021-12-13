//Omar Madjitov
//omadjitov1@student.gsu.edu
//omadjitov1

#include <stdio.h>
#include <string.h>
#define MAX_L 100

// 1) Function that sorts an array of strings where length of every string should be smaller than MAX_L
void sort(char starray[][MAX_L], int n ,char c)
{
int i, j, min_idx;
	   
	if(c == 'A' || c == 'a')//for alphabetical order
	{   
	char min_str[MAX_L];
	
	for (i = 0; i < n-1; i++) // One by one move boundary of unsorted subarray
	{            
	int min_idx = i;
	strcpy(min_str, starray[i]);
	for (j = i+1; j < n; j++)// Find the minimum element in unsorted array
	{                
	if (strcmp(min_str, starray[j]) > 0)// If min is greater than the element starray[j]
	{
	strcpy(min_str, starray[j]);// Make starray[j] as min_str and update min_idx
	min_idx = j;
	}
	}                
	if (min_idx != i)// Swap the found minimum element with the first element
	{	
	char temp[MAX_L];
	strcpy(temp, starray[i]); //swap the item[pos] and item[i]
	strcpy(starray[i], starray[min_idx]);
	strcpy(starray[min_idx], temp);
	}
	}
	}
	else //as c is validated it will be called with the value d if not a 
	{
	char max_str[MAX_L];
		         
	for (i = 0; i < n-1; i++) // One by one move boundary of unsorted subarray
	{            
	int max_idx = i;
	strcpy(max_str, starray[i]);
	for (j = i+1; j < n; j++)// Find the maximum element in unsorted array
	{                
	if (strcmp(max_str, starray[j]) < 0)// If max is greater than the element starray[j]
	{
	strcpy(max_str, starray[j]);// Make starray[j] as max_str and update max_idx
	max_idx = j;
	}
	}
	
	if (max_idx != i)// Swap the found maximum element with the first element
	{
	char temp[MAX_L];
	strcpy(temp, starray[i]); //swap the item[pos] and item[i]
	strcpy(starray[i], starray[max_idx]);
	strcpy(starray[max_idx], temp);
	}
	}
	}
}

	  
// Program is starting to get executed from here 
int main()
{
 char starray[][MAX_L] = {   "Systems",
 "Programming",
 "Deep",
 "Learning",
 "Internet",
 "Things",
 "Robotics",
 "Course"
 };
 int n = sizeof(starray)/sizeof(starray[0]);
 int i;
 char c;
  
 printf("Enter A or a for sort in alphabetical order\n");
 printf("Enter D or d for reverse alphabetical order\n Enter your choice:");

 while((c=getchar())!='a' && c!= 'A' && c!= 'D'&& c!= 'd') //input validation 
  {
  printf("invalid Input Try again ; \n");
  } 

  printf("Given array is\n\n");//printing array before sorting
  for (i = 0; i < n; i++)
  printf("%d: %s \n", i, starray[i]);
 	  
  sort(starray, n ,c);
 	    
    printf("\n-Sorted array-\n\n");//printing array after sorting
    for (i = 0; i < n; i++)
	    printf("%d : %s \n", i, starray[i]);
  	      
   return 0;
 }



















































































