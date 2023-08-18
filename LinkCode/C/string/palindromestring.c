/***************************** Palindrome string***************************************/

#include<stdio.h>
int main()
{
	char str[20];
	int l,h;
	printf("\n Enter any string: ");
	scanf("\n %s",str);
	
	 l=0;
	 h=strlen(str)-1;
	
	while(h>l)
	{
	
	
	if(str[l++]!=str[h--])
	{
		printf("\n String is not palindrome");
		return 0;
	}
    }
	
	    printf("\n String is palindrome");
}

