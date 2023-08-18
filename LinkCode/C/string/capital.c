/************************ Convert Into capital letter ************************************/

#include<stdio.h>
int main()
{
	char str[20];
	printf("\n Enter any String: ");
	scanf("\n %s",str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a')&&(str[i]<='z'))
		str[i]=str[i]-32;
	}
	printf("\n capital of string is %s",str);
}

