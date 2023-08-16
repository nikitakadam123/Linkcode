/*----------------------------------------Sorting using pointer----------------------------------------*/

#include<stdio.h>
#define max 20
int main()
{
	int i,n;
	int arr[max];
	printf("\n Enter any number: ");
	scanf("\n %d",&n);
	printf("\n Element in array: ");
	for(i=0;i<n;i++)
	{
		scanf("\n %d",&arr[i]);
	}
	 sort(n, arr); 
	
}
void sort(int n,int *ptr)
{
	int i,j,k,temp;
	

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+j) < *(ptr+i))
			{
			temp=*(ptr + i);
			*(ptr+i)=*(ptr+j);
			*(ptr+j)=temp;	
			}
			
		}
		
	}
	
	for (i = 0; i < n; i++) 
    printf("%d ", *(ptr + i)); 
}

