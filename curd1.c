#include<stdio.h>
#define max 10
int main()
{
	int i,ch,n,c,search,j,temp,newele;
	int flag;
	int arr[max];
		do{
	printf("\n1-create \n2-display \n3-search \n4-sort \n5-insert new value \n6-delete \n7-exit:");
	printf("\n enter your choice: ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			
				printf("\n enter no of array: ");
				scanf("%d",&n);
				printf("\n enter element:");

				for(i=0;i<n;i++)
				{
					scanf("%d",&arr[i]);
				}
				break;
			
		case 2:
			
				printf("display list of array: ");
				for(i=0;i<n;i++)
				{
					printf("\n%d",arr[i]);
				}
				break;
		case 3:
			flag=0;
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
			case 4:
				
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
				printf("sorted array is\n");
			break;
			case 5:
				printf("\n Enter element which u want to insert: ");
				scanf("%d",&newele);
}
    printf("\nDo you want to continue press 1");
	scanf("%d",&c);
	}while(c==1);

	
	printf("\n--------------------THANKYOU---------------------");	

	return 0;
}
