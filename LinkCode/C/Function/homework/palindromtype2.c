/****************************** Palindrom************************************************/

//Type 2: With arugument and without return type

#include<stdio.h>
void palindrom(int);
int main()
{
	int n;
	printf("\n Enter any number: ");
	scanf("\n %d",&n);
	palindrom(n);
}
void palindrom(int n)
{
	int temp,r;
	int sum=0;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\n Palindrom Number ");
	}
	else
	{
		printf("\n Not Palindrom Number ");
	}
}
