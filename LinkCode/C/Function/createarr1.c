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
	return 0;	
}


