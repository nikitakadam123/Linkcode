/*********************Pointer with array************************************/

#include<stdio.h>
int main()
{
	int i,sum=0;
	int arr[5]={10,20,30,40,50};
	int *p1;
	p1=&arr[0];
	printf("\n %d",*(p1+4));
	printf("\n %d",*(p1+3));
	printf("\n %d",*(p1+2));
	printf("\n %d",*(p1+1));
	printf("\n %d",*p1);
	printf("\n------------------For loop---------------------");
	for(i=4;i>=0;i--)
	{
		sum=sum+*(p1+i);
		printf("\n %u --->  %d",(p1+i),*(p1+i));
	}
	printf("\n sum is :%d",sum);
	return 0;
}
