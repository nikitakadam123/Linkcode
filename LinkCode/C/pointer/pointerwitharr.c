/********************************** Pointer with array**************************************************/

#include<stdio.h>
int main()
{
	int i,j,n1,*p1;
	int search,flag=0;
	int arr[5];
	p1=&arr[0];
	
	printf("\n Enter element in array: ");
	for(i=1;i<=5;i++)
	{
		scanf("\n %5d",(p1+i));
	}
	
	printf("\n Display element in array: ");
	for(i=1;i<=5;i++)
	{
		printf("\n %5d",*(p1+i));
	}
	
	/*************searching******************/
	printf("\n Enter element which u want to search: ");
	scanf("\n%5d",&search);
	for(i=0;i<5;i++)
	{
		if((*(p1+i))==search)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
	{
		printf("\nElement is found");
	}
	else{
		printf("\nElement is Not found");
	}
	
	
	return 0;
}
