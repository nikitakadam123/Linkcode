/********************************** Array with function ****************************************************/

#include<stdio.h>
#define max 20
//void arr1(int[]);
void printArray(int *arr, int n);
int main()
{
	int arr[max];
	int i;
	int n,c,ch;
	printArray(arr, n);
    return 0;

	do{
	
	printf("\n1- Create an array \n2- Display array element \n3- Search element in array \n4- Insert new element in array \n5- Delete value from array");
	 
	switch(ch)
	{
	  case 1: 	//create an array
	  printf("\n how many elements in array: ");
	  scanf("\n%d",&n);
	  printf("\n Enter array element ");
	  for(i=0;i<n;i++)
	  {
	    scanf("\n %d",&arr[i]);
      }
      break;
      
      case 2:
	   
	  //Display array
      printf("Array elements are: ");
	  for(i = 0;i<n; i++)
	  {
        printf("%d, ", arr[i]);
	  }
	  break;
	  
    }
    printf("\n Do you want to continue press 1: ");
    scanf("\n%d",&c);
   }while(c==1);
   //return 0;
   
}
   

