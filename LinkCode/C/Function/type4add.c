/****************************** Addition of two n0********************************************/

//type 4 - With argument with return type

#include<stdio.h>
int add(int, int);
int main()
{
	int n1,n2,sum;
	printf("\n Enter 1st no.");
	scanf("\n%d",&n1);
	printf("\n Enter 2st no.");
	scanf("\n%d",&n2);
	sum=add(n1,n2);
	printf("\n Addition is %d",sum);
	return 0;
	
}
int add(int n1,int n2)
{

	int sum;
	sum=n1+n2;
	
	return sum;
}
