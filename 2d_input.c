#include<stdio.h>
int main()
{
	int i,j,row,col;
	int mat[3][4];	
	//printf("\n Enter Number of row= ");
	//scanf("\n%d",&row);
	//printf("\n Enter Number of col= ");
	//scanf("\n%d",&col);

   printf("\nEnter Array element: ");
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			
			scanf("\n%d",&mat[i][j]);
		}
	}
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%5d",mat[i][j]);
		}
	printf("\n");
	}
	return 0;
}

