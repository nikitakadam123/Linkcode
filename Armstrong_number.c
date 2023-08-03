#include<stdio.h>
int main()
{
	int number,sum=0,r,i,temp,n;
	
	printf("\nEnter any number= ");
	scanf("\n%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum)+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("Armstrong Number");
	}
	else{
		printf("Not an armstrong number");
	}
	return 0;
}
