#include<stdio.h>
int main()
{
	int i=1,fact=1,number;
	
	printf("\n Enter any number= ");
	scanf("\n%d",&number);
	
	while(i<=number)
	{
		fact=fact*i;
		i++; 
	}
	printf("\nfactorial of %d is %d",number,fact);
	return 0;
}
