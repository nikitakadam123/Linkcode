#include<stdio.h>
#define max 20
int main()
{
	int i,j,row,col,r1,r2,c1,c2;
	int x=0;
	int mat1[max][max],mat2[max][max],mat3[max][max];
	
	printf("\n Enter No of row in matrix 1: ");
	scanf("\n%d",&r1);
	printf("\n Enter No of column in matrix 1: ");
	scanf("\n%d",&c1);
	printf("\n Enter No of row in matrix 2: ");
	scanf("\n%d",&r2);
	printf("\n Enter No of column in matrix 2: ");
	scanf("\n%d",&c2);
	
	if((r1==c1)&&(r2==c2))
	{
		x=1;
	}
	else{
		printf("\n Addition is not possible ");
	}
	if(x==1)
	{
	
	printf("\n Enter element in matrix 1: ");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%5d",&mat1[i][j]);
		}
		//printf("\n");
	}
	
	printf("\n Enter element in matrix 2: ");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%5d",&mat2[i][j]);
		}
		
	}
	
	//Addithion of two matrix
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
		//printf("\n5%d",mat3[i][j]);
	}
  //display elements
  
	for(i=0;i<r1;i++)
	   {
		for(j=0;j<c1;j++)
		{
		    printf("\n5%d",mat3[i][j]);
		}
		printf("\n");
	}
}
	
	return 0;
	
}
