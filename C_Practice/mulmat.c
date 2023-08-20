/************************************ matrix multipilcation ***************************************************/

#include<stdio.h>
#define max 20

int main()
{
	int mat1[max][max],mat2[max][max],mat3[max][max]={0};
	int i,j,k,r1,r2,c1,c2,x=0;
	
	printf("\n Enter number of rows you want in matrix 1= ");
	scanf("\n %d",&r1);
	
	printf("\n Enter number of colume you want in matrix 1= ");
	scanf("\n %d",&c1);
	
	printf("\n Enter number of rows you want in matrix 2= ");
	scanf("\n %d",&r2);
	
	printf("\n Enter number of colume you want in matrix 2= ");
	scanf("\n %d",&c2);
	
	if((r1==c1)&&(r2==c2))
	{
		x=1;
		
	}
	else{
		printf("\n Multipilcation is not possible ");
	}
	if(x=1)
	{
		printf("\n Enter element in matrix 1= ");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("\n%d",&mat1[i][j]);
			}
		}
		
		printf("\n Enter element in matrix 2= ");
		for(j=0;j<r2;j++)
		{
			for(k=0;k<c2;k++)
			{
				scanf("\n%d",&mat2[j][k]);
			}
		}
		
		printf("\n Multiplication logic ");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				for(k=0;k<r1;k++)
				{
					mat3[i][k]=mat3[i][k]+mat1[i][j]*mat2[j][k];
				}
			}
		}
		
		printf("\n Multipilcation is: \n");
		for(i=0;i<r1;i++)
		{
			for(k=0;k<c1;k++)
			{
				printf("%5d",mat3[i][k]);
			}
			printf("\n");
		}
		
	}
}

