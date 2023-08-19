/******************************************************* Array sorting using Function ************************************************************/

#include<stdio.h>
#define max 20

void main()
{
	int n,i;
	int arr[20];
	printf("\n How many Element you want in array ? ");
	scanf("\n%d",&n);
	printf("\n Enter element in array: ");
	for(i=0;i<n;i++)
	{
		scanf("\n %d",&arr[i]);
	}
		
	sort(arr,n);
	display(arr,n);
	return 0;
}

int sort(int *arr, int n)
{
	int i,j,temp;
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\n Array is sorted !!");
}

void display(int *arr, int n)
{
	int i;
	printf("\n Element in array are: ");
    for(i=0;i<=n;i++)
    {
    	printf("\n %d",arr[i]);
	}
}
