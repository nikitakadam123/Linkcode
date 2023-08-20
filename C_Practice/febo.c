/************************ febonieos of numner************************/

#include<stdio.h>

int main()
{
	int n1=0,n2=1,fact,num,i,n3;
	printf("\n Enter any number= ");
	scanf("\n%d",&num);
	printf("\n 1st and 2nd number ");
	
	for(i=2;i<num;i++)
	{
		n3=n1+n2;
		printf("\n Number is %d",n3);
		n1=n2;
		n2=n3;
	}
	return 0;

}
