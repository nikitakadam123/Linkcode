#include<stdio.h>

/* positive or negative*/

int main()
{
	int no;
	printf("\n enter your number");
	scanf("\n%d",&no);
	if(no>0)
	{
		printf("\n number is positive");
	}
	else if(no<0)
	{
		printf("\n number is negative");
	}
	else
	{
		printf("\n origin");
	}
	return 0;
}
