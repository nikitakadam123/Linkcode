#include<stdio.h>
int main()
{
	int i,fact=1,number;
	
	printf("\n Enter any number= ");
	scanf("\n%d",&number);
	
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	printf("\nfactorial of %d is %d",number,fact);
	return 0;
}
