#include<stdio.h> 
int main()
{
	int i,n,r,temp;
	int sum=0;
	printf("\n Enter any No. ");
	scanf("\n%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;           //for armstrong no. sum=sum+(r*r*r)
		n=n/10;
	}
	if(temp==sum)
	{
		printf("Palindrom number ");
	}
	else
	{
	    printf("Not Palindrom number ");
	}
	return 0;
}
