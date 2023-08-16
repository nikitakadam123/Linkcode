/*********************Pointer with array************************************/

#include<stdio.h>
int main()
{
	int i;
	int arr[5]={10,20,30,40,50};
	int *p1;
	p1=&arr[0];
	printf("\n %d",*p1);
	printf("\n %d",*(p1+1));
	printf("\n %d",*(p1+2));
	printf("\n %d",*(p1+3));
	printf("\n %d",*(p1+4));
	printf("\n------------------For loop---------------------");
	for(i=0;i<5;i++)
	{
		printf("\n %u --->  %d",(p1+i),*(p1+i));
	}
	return 0;
}
