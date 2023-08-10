#include<stdio.h>
#define max 20
int main()
{
	int i,j,k,r1,r2,c1,c2,r3,c3;
	int x=0;
	int mat1[max][max],mat2[max][max],mat3[max][max]={0};
	
	printf("\n Enter No of row in matrix 1: ");
	scanf("\n%d",&r1);
	printf("\n Enter No of column in matrix 1: ");
	scanf("\n%d",&c1);
	printf("\n Enter No of row in matrix 2: ");
	scanf("\n%d",&r2);
	printf("\n Enter No of column in matrix 2: ");
	scanf("\n%d",&c2);
	if((c1==r2)&&(c2==c2))
	{
		x=1;
	}
	else
	{
		printf("Multiplication not possible: ");
	}
	if(x==1)
	{
	printf("\n Enter element in matrix1: ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("\n%5d",&mat1[i][j]);
		}
	}
	
	printf("\n Enter element in matrix2: ");
	for(j=0;j<r2;j++)
	{
		for(k=0;k<c2;k++)
		{
			scanf("\n%5d",&mat2[j][k]);
		}
	}
	
	//printf("\n Enter element in matrix2: ");
	for(i=0;i<r2;i++)
	{
		for(k=0;k<c2;k++)
		{
			for(j=0;j<r2;j++)
			{
				mat3[i][k]=mat3[i][k]+(mat1[i][j]*mat2[j][k]);
			}
		}
	}
	printf("\nMultipilcation is ");
	for(i=0;i<r3;i++)
	{
			for(k=0;k<c3;k++)
			{
				printf("%5d",mat3[i][k]);
			}
		printf("\n");	
		}
}
	return 0;
	

	
}
