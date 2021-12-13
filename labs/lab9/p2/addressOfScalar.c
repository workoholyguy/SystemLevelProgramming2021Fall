#include"stdio.h"

int main()
{

// intialize a char variable, print its address and the next address
   char charvar='\0';  
   printf("address of charvar = %p\n",(void *)(&charvar) );
   printf("address of charvar + 1 = %p\n",(void *)(&charvar)+1 );
   printf("address of charvar - 1 = %p\n",(void *)(&charvar)-1 );

// intialize an int variable, print its address and the next address
   int intvar=1;
   printf("address of intvar = %p\n",(void *)(&intvar) );
   printf("address of intvar + 1 = %p\n",(void *)(&intvar)+1 );
   printf("address of intvar - 1 = %p\n",(void *)(&intvar)-1 );
}
