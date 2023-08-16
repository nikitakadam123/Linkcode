/*------------------------------Return the addres and value of array---------------------------------*/ 

#include<stdio.h>
int main()
{
	int *ptr,i;
	
	int arr[3]={3,4,5};
	ptr=arr;
	for(i=0;i<3;i++)
	{
		printf("\nAddres of %u", ptr);
	
	
		printf("\nvalue of %d", *ptr);
	ptr++;
		
    }
    

	return 0;
	
}
