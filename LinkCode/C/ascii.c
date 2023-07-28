#include<stdio.h>

/*ascii program*/

int main()
{
	char ch;
	printf("\n enter any character: ");
	scanf("%c",&ch);
	
	if((ch>=65)&&(ch<=90))
	{
		printf("\n its capital char..",&ch);
	}
	else if((ch>=97)&&(ch<=122))
	{
		printf("\n its small char..",&ch);
	}
	else if((ch>=48)&&(ch<=56))
	{
		printf("\n it is a number..",&ch);
	}
	else
	{
		printf("\n other character..",&ch);
	}
	return 0;
}

