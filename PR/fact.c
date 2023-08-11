#include<stdio.h>
int main()
{
	int n,i;
	int fact=1;
	printf("\n Enter any number: ");
	scanf("\n%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n Factorial of no %d",fact);
	return 0;
}
