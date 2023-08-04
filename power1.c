#include<stdio.h>

int main()
{
	int b,p,result;
	int i;
	printf("\n Enter base and power: ");
	scanf("\n%d %d",&b,&p);
	i=1;
	result=1;
	while(i<=p)
	{
		result=result*b;
		i++;
	}
	printf("\nFor base %d power %d is: %d ",b,p,result);
	
	return 0;
}
