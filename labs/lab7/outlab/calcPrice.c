#include<stdio.h>
//Omar Madjitov
////omadjitov1@student.gsu.edu
////omadjitov1
int main()
{
//1)Declaring Variables
int itemnum,qty;
double unitprice,total;
char date[13];

//2)Prompt the user and store his answers into variables 
printf("Enter item number:");
scanf("%d",&itemnum);
printf("Enter unit price:$");
scanf("%lf",&unitprice);
printf("Enter quantity:");
scanf("%d",&qty);
printf("Enter purchase date (mm/dd/yyyy):",&date);
scanf("%s",&date);

//3) Calculate the total price
total=unitprice*qty;

//4) Print the info
printf("Item Number		|Unit Price		|Quantity		|Purchase Date		|Total Ammount\n");
printf("%-d			|$%lf     	|%-d       		|%-s		|$%lf \n",itemnum,unitprice,qty,date,total); 
// minus in front of 1st 3rd and 4th values shows a left justification
// 2nd and 5th values are right justified by default  

return 0;
}






