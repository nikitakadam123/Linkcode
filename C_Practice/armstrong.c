/*************************************** Armstrong number **********************************************/

#include<stdio.h>

int main()
{
	int n,r,temp;
	int sum=0;
	printf("\n Enter any number= ");
	scanf("\n%d",&n);
	
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp=sum)
	{
		printf("\n Armstrong number ");
	}
	else{
		printf("\n Not an Armstrong number ");
	}
}
