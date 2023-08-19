/************************************************** Array Display using funcion *****************************************************************/
// using type 2: with argument without return type
#include<stdio.h>
#define max 20

int main()
{
	int arr[max];
	int n;
	printf("\n How many Element you want in array ? ");
	scanf("\n%d",&n);
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
