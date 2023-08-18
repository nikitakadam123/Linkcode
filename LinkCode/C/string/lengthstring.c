/*********************** String length *************************************/

#include<stdio.h>
int main()
{
	char str[10];
	int l,i;
	printf("\n Enter any string: ");
	scanf("\n %s",&str);
	l=0;
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("\n Length of string\n : %d",l);
    return 0;
}
