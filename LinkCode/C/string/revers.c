/************************ count and reverse string**********************/

#include<stdio.h>
int main()
{
	char str[20];
	int l=0;
	int i;
	printf("\n Enter any string: ");
	scanf("\n %s",&str);
	
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("\nLength of string is: %d\n",l);
	
	
	for(i=l-1;i>=0;i--)
	{
		printf(" %c",str[i]);
	}
}
