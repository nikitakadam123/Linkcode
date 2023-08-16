#include<stdio.h>
#define max 20
int main()
{
	int n,i;
	int arr[max];
	printf("Enter number of elemnet which u want in array: ");
	scanf("\n%d",&n);
	printf("\n Enter array element ");
	for(i=0;i<n;i++)
	{
		scanf("\n %d",&arr[i]);
	}
	
	printf("\n Display array: ");
	for(i=0;i<n;i++)
	{
		printf("\n %d",arr[i]);
	}
	return 0;
}
