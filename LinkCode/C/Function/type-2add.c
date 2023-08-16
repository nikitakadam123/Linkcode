/*********************** Addition of two no***************************************/

//Type 2- With argument without return type

#include<stdio.h>
void add(int, int);
int main()
{
	int n1,n2,sum;
	printf("\nHello");
	printf("\n Enter 1st no: ");
	scanf("%5d",&n1);
	printf("\n Enter 2st no: ");
	scanf("%5d",&n2);
	add(n1,n2);
	printf("\nThank u");
}

void add(int n1,int n2)
{
	int sum;
	sum=n1+n2;
	printf("\nSum is: %d",sum);
	
}
