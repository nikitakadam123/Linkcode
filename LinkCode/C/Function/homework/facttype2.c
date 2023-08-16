/****************************factorial************************************/

// Type 2- With argument without return type

#include<stdio.h>
void fact(int);
int main()
{
	int n;
	printf("\n Enter any no: ");
	scanf("\n%d",&n);
	fact(n);
}
void fact(int n)
{
	
    int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("fact is: %d",fact);
}
