/********************************************** Matrix Addition ***************************************************/

#include<stdio.h>
#define max 20
int main()
{
	int mat1[max][max],mat2[max][max],mat3[max][max];
	int i,j,r1,r2,c1,c2,x;
	
	printf("\n Enter no. of rows u want in matrix 1= ");
	scanf("\n%d",&r1);
	
	printf("\n Enter no. of colume u want in matrix 1=  ");
	scanf("\n%d",&c1);
	
	printf("\n Enter no. of row u want in matrix 2= ");
	scanf("\n%d",&r2);
	
	printf("\n Enter no. of colume u want in matrix 2= ");
	scanf("\n%d",&c2);
	
	if((r1==r2)&&(c1==c2))
	{
		x=1;
		//break;
	}
	else{
		printf("\n Addition is not possible");
	}
	if(x=1)
	{
		printf("\n Enter element in matrix 1st: ");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("\n%d",&mat1[i][j]);
			}
		}
		
		printf("\n Enter element in matrix 2nd: ");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("\n%d",&mat2[i][j]);
			}
		}
		
		printf("\n Addition logic ");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				mat3[i][j]=mat1[i][j]+mat2[i][j];
			}
		}
		
		printf("\n Addition of matrix is :\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%5d",mat3[i][j]);
			}
			printf("\n");
		}
	}
	
	
	return 0;
 } 
