#include<stdio.h>
#define max 20
int main()
{
	int i,j,k,n;
	int mat1[max][max],mat2[max][max],mat3[max][max];
	
	printf("\n Enter row and col value: ");
	scanf("\n%d",&n);
	
	printf("\nElement In matrix 1: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%5d",&mat1[i][j]);
		}
	}
	printf("\n Enter row and col value: ");
	scanf("\n%d",&n);
	
	printf("\nElement In matrix 2: ");
	for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
		{
			scanf("%5d",&mat2[i][j]);
		}
	}
	
       for(i=0;i<n;i++) 
	   {
        for(j=0;j<n;j++) 
		{
            mat3[i][j]=0;
            for (k=0; k<n;k++)
		    {
                mat3[i][k]=mat3[i][k]+(mat1[i][j] * mat2[j][k]) ;
            }
        }
       }

    printf("The product of the two matrices is: \n");
    for (i=0;i<n;i++) 
	{
        for (k=0;k<n;k++) 
		{
            printf("%d\t",mat3[i][k]);
        }
        printf("\n");
    }
    return 0;
}
