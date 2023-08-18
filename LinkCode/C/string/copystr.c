/***************************Copy content of char string****************************************/
#include<stdio.h>
int main()
{
	char str1[10];
	char str2[20];
	char str3[30];
	int l=5;
	int i,j;
	 printf("\n Enter 1st string:  ");
	 scanf("\n %s",str1);
	 printf("\n Enter 2nd string:  ");
	 scanf("\n %s",str2);
	 for(i=0;str1[i]!='\0';i++)
	 
	 	for(j=0;str2[j]!='\0';j++)
	   {
	   	str1[i]=str2[j];
	  	i++;
      }
    
    str1[i]='\0';
    
	 printf("\n String is %s",str1);
	 return 0;
}
