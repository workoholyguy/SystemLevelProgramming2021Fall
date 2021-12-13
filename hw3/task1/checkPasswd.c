
//OMAR MADJITOV
//002511575
#include <string.h>
#include <stdio.h>


int main(void)
{
   //variables declaration
 int Passwordlength, DeductPoints;
 char password[20];
         
 //read user input of password string
 printf("Enter a password : ");
 scanf("%s", password);
  
 //calculate length of password string
 Passwordlength = strlen(password);
              
 //when password string length is less than 10 characters
 //deduct 5 points for each missing character
 if(Passwordlength<10)
 {
//calculate deduction points
 DeductPoints= (10-Passwordlength)*5;
                                                   
 //display deduction points
 printf("\nDeduction = %d points\n", DeductPoints);
                                                          
 //display result
 printf("The password is unsafe! Please reset."); 
  }
  //when password is safe
  else
  printf("\nThe password is safe.\n");  
  return 0;
}
