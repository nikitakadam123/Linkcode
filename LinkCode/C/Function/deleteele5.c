/************************************ Delete elemnet from array using function ****************************************************************/

#include<stdio.h>
#define max 20

int main()
{
	int arr[max];
	int n,i,pos;
	
	printf("\n Enter number of element u want in array ");
	scanf("\n%d",&n);
	
	printf("\n Enter Element in array ");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&arr[i]);
	}
	printf("\n Enter location where you wish to delete element ");
	scanf("\n %d",&pos);
	if(pos>=n+1)
	{
		printf("\n Deletion not possible");
	}
	else{
		for(i=pos-1;i<n-1;i++)
		arr[i]=arr[i+1];
		printf("\n Resultant array is ");
		
			for(i=0;i<n-1;i++)
			{
				printf("\n %d",arr[i]);
			}

		
		}
	}

