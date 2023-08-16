/****************************factorial************************************/

// Type 4- With argument with return type

#include<stdio.h>
int factorial(int);
int main()
{
	int n1,fact;
	printf("\n Enter any number: ");
	scanf("\n %d",&n1);
	fact= factorial(n1);
	printf("\n Factorial of enterd number is: %d", fact);
	return 0;
}
int factorial(int n1)
{
	int i,fact;
	for(i=1;i<=n1;i++)
	{
		fact= fact *i;
	}
	return fact;
}
