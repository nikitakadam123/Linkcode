#include<stdio.h>
int main()
{
	int n,r,rev;
	printf("\n Enter any number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("\n%d",rev);
	
	printf("\n Reverse number");
	
}
