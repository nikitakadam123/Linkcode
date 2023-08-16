#include<stdio.h>
int main(){
	int arr[3][3][3]={10,20,30, 40,50,60, 70,80,90, 
	                11,12,13, 14,15,16, 17,18,19,
					21,22,23, 24,25,26, 27,28,29};
					
	int i,j,k;
	
	printf("\nAddress: \n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%u[%d%d%d]\t",(*(*(arr+i)+j)+k),i,j,k);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	printf("\nValues: \n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%u[%d%d%d]\t",*(*(*(arr+i)+j)+k),i,j,k);
			}
			printf("\n");
		}
		printf("\n");
		
	}				
	return 0;
}
