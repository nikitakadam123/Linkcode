/****************************** Palindrom************************************************/

//Type 3: Without arugument and with return type

#include<stdio.h>
int main()
{
	int sum=0,temp,n;
    sum=palindrom();
    
	if(temp==sum)
	{
		printf("\n Palindrom Number ");
	}
	else
	{
		printf("\n Not Palindrom Number ");
	}
	return 0;
	
}
int palindrom()
{
	int n,sum,temp,r;
	printf("\n Enter any number: ");
	scanf("\n %d",&n);

	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	return sum;
}
