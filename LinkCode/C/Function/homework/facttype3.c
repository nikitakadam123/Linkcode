/****************************factorial************************************/

// Type 3- Without argument with return type

#include<stdio.h>
int main()
{
	int fact;
	fact= factorial();
	printf("\n Factorial of number is %d",fact);
	return 0;
}
int factorial()
{
	int fact=1,n,i=1;
	printf("\nEnter any number: ");
	scanf("\n %d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
