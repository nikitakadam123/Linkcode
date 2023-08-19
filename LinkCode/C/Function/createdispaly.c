/******************************************** Array inserstion using function ***************************************************************/
// Using type 1: without argument and without return type
#include<stdio.h>
#define max 20
int main()
{
	int arr[max];
	int n,i;
	printf("\n How many Element you want in array ? ");
	scanf("\n%d",&n);
	
	printf("\n Enter element in array: ");
	for(i=0;i<n;i++)
	{
		scanf("\n %d",&arr[i]);
	}
	
	display(arr,n);
	return 0;	
}

void display(int *arr, int n)
{
	int i;
	printf("\n Element in array are: ");
    for(i=0;i<n;i++)
    {
    	printf("\n %d",arr[i]);
	}
}
