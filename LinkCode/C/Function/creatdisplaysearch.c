/****************************************************** Search element from array using function **************************************************/

#include<stdio.h>
#define max 20
int main()
{
	int i,n,key,flag=0,j,temp;
	int arr[max];
	printf("\n How many Element you want in array ? ");
	scanf("\n%d",&n);
	
	printf("\n Enter element in array: ");
	for(i=0;i<n;i++)
	{
		scanf("\n %d",&arr[i]);
	}
	
	printf("\n Enter element which u want to search: ");
	scanf("\n%d",&key);
	
	display(arr,n);
	if(search(arr,n,key))
	{
		printf("\n Element found !!");
	}
	else{
		printf("\n Sorry Element not found !!!");
	}
	 
	sort(arr,n);
	printf("\n Array is sort");
	//print(arr,n);
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

void search(int *arr, int n,  int key)
{
	
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return 1;
		}
	}
	
}

int sort(int *arr, int n)
{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
			
			temp=arr[i];
			arr[i]=arr[j];
		  	arr[j]=temp;
		    }
    	}
	}
	/*print(int *arr,int n)
    { 
   
    int i;
    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
    }*/
}

