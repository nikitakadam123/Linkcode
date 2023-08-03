#include<stdio.h>
int main()
{
	int a=10,b=20;
	int n1,n2;
	printf("\n %d and %d Befor Swapping ",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n %d and %d After Swapping ",a,b);
	printf("\n__________________________________________________________________________\n");
	
	printf("\nEnter 1st number= ");
	scanf("\n%d",&n1);
	printf("\nEnter 2nd number= ");
	scanf("\n%d",&n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("\n %d and %d After Swapping ",n1,n2);
	return 0;
}
