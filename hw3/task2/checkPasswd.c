//OMAR MADJITOV
//002511575


#include <stdio.h>
#include <string.h>
int main()
{
	int x=0,y=0,p=0;
	int ans=100,z=0;
	char c[20];
	
	printf("Enter a password: ");
	scanf("%s", c);
//	printf("%s",pass);

	for(int i=0;c[i]!='\0';i++)
	{
		if(c[i]>=65 && c[i]<=90) 
		{
 		y=1;
		}
		if(c[i]>=97 && c[i]<=122) 
		{	
		x=1;	
		}
		if(c[i]>=48 && c[i]<=57) 
		{
		z=1;
		}
	
		if(i>1)
		{
			int a=c[i-1];
			int b=c[i];
			int d=c[i-2];
			if((a+1)==b && (d+1)==a) 
			{
			p=1;
			}	
		} 		

	}	

	if(x==0) 
	{
	ans-=20;
	}
	if(y==0) 
	{
	ans-=20;	
	}
	if(z==0) 
	{
	ans-=20;
	}
	if(p==1)
	{
	ans-=20;
	}

	printf("Final score: %d \n",ans);
	if(ans<=70) 
	{
	printf("The password is unsafe! Please reset.\n");
	printf("");
	}

	else printf("The password is safe\n");
	printf("");
}
