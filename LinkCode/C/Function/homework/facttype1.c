/*********************************factorial*************************************/
/************type1 without argument without return type******************/

#include<stdio.h>
int main()
{
	printf("\nFunction start");
	fact();
	printf("\nFunction stop");
	return 0;
}
void fact()
{
	int fact=1,i,num;
	printf("\nenter number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("fact is: %d",fact);
}


