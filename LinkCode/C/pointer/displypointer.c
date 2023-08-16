#include<stdio.h>
#define max 20
int main()
{
	int n,i;
	int arr[max];
	int *p1=&arr[i];
    
	
	printf("Enter number of elemnet which u want in array: ");
	scanf("\n%d",p1);
	
	printf("\n Enter array element ");
	for(i=0;i<p1;i++)
	{
		scanf("\n %d",&p1);
	}
	
	printf("\n Display array: ");
	for(i=0;i<p1;i++)
	{
		printf("\n %d",*(p1+i));
	}
	return 0;
}
