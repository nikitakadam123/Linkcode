#include<stdio.h>
#define max 20
int main()
{
	int i,j,row,col;
	int mat[max][max];	
	printf("\n Enter Number of row= ");
	scanf("\n%d",&row);
	printf("\n Enter Number of col= ");
	scanf("\n%d",&col);

   printf("\nEnter Array element: ");
	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			
			scanf("\n%d",&mat[i][j]);
		}
	}
	
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%5d",mat[i][j]);
		}
	printf("\n");
	}
	return 0;
}

