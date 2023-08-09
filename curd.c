#include<stdio.h>
#define max 10
int main()
{
	int i,ch,n,c,search,j,temp,newele,loc,pos,x ;
	int flag;
	int arr[max];
	do{
	printf("\n1-create \n2-display \n3-search \n4-sort \n5-insert new value \n6-delete \n7-exit:");
	printf("\n enter your choice: ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:      //create an array
			
				printf("\n enter no of array: ");
				scanf("%d",&n);
				printf("\n enter element:");

				for(i=0;i<n;i++)
				{
					scanf("%d",&arr[i]);
				}
				break;
			
		case 2:      //display the array
			
				printf("display list of array: ");
				for(i=0;i<n;i++)
				{
					printf("\n%d",arr[i]);
				}
				break;
		case 3:        //searching element from the n numbers array
			printf("\n Enter element u want to search of array: ");
			scanf("\n %d",&search);
			
			for(i=0;i<n;i++)
			{
				if(arr[i]==search)
				{
					flag=1;
					break;
				}
				
			}
			if(flag==1)
			{
				printf("\n element found");
				
			}
	        else
	        { 
	        printf("\n element  not found");
			}
			break;
			case 4:     //sorting the array
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
				printf("\n Sorted.......");
			break;
			case 5:
				 printf("\nEnter the new element to be inserted: ");
                 scanf("%d", &x);
                 printf("Enter the position where element is to be inserted: ");
                 scanf("%d", &pos);
 
    //shift all elements 1 position forward from the place
    //where element needs to be inserted
                  n=n+1;
                 for(i = n-1; i >= pos; i--)
        arr[i]=arr[i-1];
 
    arr[pos-1]=x; //Insert the element x on the specified position
 
    //print the new array
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    
    }
    break;
			case 6:
				printf("Enter the location where you wish to delete element\n");
                scanf("%d", &pos);

                if (pos>=n+1)
                printf("Deletion not possible.\n");
                else
                {
               for (i = pos- 1; i < n - 1; i++)
                arr[i] = arr[i+1];
				printf("Resultant array:\n");
				for (i = 0;i<n-1;i++)
				printf("%d\n", arr[i]);
				break;
				}


}

    printf("\nDo you want to continue press 1");
	scanf("%d",&c);
	}while(c==1);

	
	printf("\n--------------------THANKYOU---------------------");	

	return 0;
}
