/****************************** Palindrom************************************************/

//Type 1: Without arugument and without return type

#include<stdio.h>
int main()
{
	palindrom();
}
void palindrom()
{
	int r,n,sum=0,temp;
	printf("\n Enter any number: ");
	scanf("\n %d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\n Palindrom number ");
		
	}
	else{
		printf("\n Non palindrome number ");
	}
}
