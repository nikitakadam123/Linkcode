/*********************** Addition of two no***************************************/

//Type 3- Without argument with return type

#include<stdio.h>

//void add()
int main()
{
	int sum;
	sum=add();
	printf("\n Addition is %d",sum);
	
}
int add()
{
    int sum;
	int n1,n2;
	printf("\n Enter 1st no: ");
	scanf("%5d",&n1);
	printf("\n Enter 2st no: ");
	scanf("%5d",&n2);
	sum=n1+n2;
	return sum;
}
