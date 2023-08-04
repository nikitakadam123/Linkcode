#include<stdio.h>
int main()
{
	int n,r,sum=0;
	
	printf("\n Enter any Number: ");
	scanf("\n %d",&n);
	
	while(n>0)
	{
	    r=n%10;
		sum=sum+r;
		n=n/10; 	
	}
	printf("\n Sum of digit %d is %d",n,sum);
     return 0;
}
