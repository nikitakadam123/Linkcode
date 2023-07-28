#include<stdio.h>

int main()
{
	int no;
	printf("\n enter any no");
	scanf("\n%d",no);
	if ((no%3==0)&&(no%5==0))
	{
		printf("\n %d divisible by 3 and 5: ",&no);
	}
	else if(no%3==0)
	{
		printf("\n %d divisible by 3 only",&no);
	}
	else if(no%5==0)
	{
		printf("\n %d divisible by 5 only",&no);
	}
	else 
	{
		printf("\n no is not divisible by 3 and 5",&no);
	}
return 0;

}
