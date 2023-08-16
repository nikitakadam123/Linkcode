#include<stdio.h>
//type 1- without argument and without return type
int main()
{
	printf("\n Hello welcome to addition program\n");
	add();
	printf("\n");
	add();
	printf("\n ---------------------Thank u--------------------------- \n");
	return 0;
	
}
void add()
{
	int n1,n2,sum;
	printf("\n Enter 1st no: ");
	scanf("%5d",&n1);
	printf("\n Enter 2st no: ");
	scanf("%5d",&n2);
	sum=n1+n2;
	printf("\n Addition is: %d ",sum);
}

