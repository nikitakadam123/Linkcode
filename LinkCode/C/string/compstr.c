/******************** Find the greater string between two string************************/

#include<stdio.h>
int main()
{
	char str1[10],str2[20];
	int i,j,value;
	printf("\n Enter 1st String ");
	scanf("\n%s",&str1);
	printf("\n Enter 2nd String ");
	scanf("\n%s",&str2);
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=0;str2[j]!='\0';j++)
		{
			value=strcmp(str1,str2);
		}
	}
	if(value==0)
	{
		printf("\n Same string ");
	}
	else{
		printf("\n Not Same string ");
	}
	if(value<0)
	{
		printf("\n String 2 is grater ");
	}
	else{
		printf("\n String 1 is grater ");
	}
}
