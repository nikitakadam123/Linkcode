#include<stdio.h>
int main()
{
	int i,j;
	int mat[3][4]={
		            {10,20,30,40},
		            {50,60,70,80},
		            {90,100,110,120},
	              };
	for(i=0;i<3;i++)  //row
	{
		for(j=0;j<4;j++)
		{
			printf("%5d",mat[i][j]);
		}
	printf("\n");
	}
	return 0;
	
}
