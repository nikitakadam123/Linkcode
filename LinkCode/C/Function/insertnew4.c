/************************************ Insert new elemnet in array using function ****************************************************************/

#include<stdio.h>
#define max 20

int main()
{
	int arr[20];
	int i,j,n,x,pos;
	printf("\n Enter number of element u want in array ");
	scanf("\n%d",&n);
	
	printf("\n Enter Element in array ");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&arr[i]);
	}
	
	printf("\n Enter new element to be inserted: ");
	scanf("\n%d",&x);
	printf("\n Enter Position of element where u want to enter new element: ");
	scanf("\n%d",&pos);
	n=n+1;
	for(i=n-1;i>=pos;i--)
	arr[i]=arr[i-1];
	arr[pos-1]=arr[i-1];
	arr[pos-1]=x;
	printf("\n New element is inserted");
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
 
