/***************************** Factorial of number **************************************/

#include<stdio.h>
int main()
{
	int fact=1,n,i;
	printf("\n Enter any number: ");
	scanf("\n%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n factorial is: %d",fact);
}
