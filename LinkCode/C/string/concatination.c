/************************ String Concatination*******************************************/
#include<stdio.h>
#define max 20
int main()
{
	char str1[max];
	char str2[20];
	char str3[30];
	int l=5;
	int i,j;
	 printf("\n Enter 1st string:  ");
	 scanf("\n %s",str1);
	 printf("\n Enter 2nd string:  ");
	 scanf("\n %s",str2);
	 int count=0;
	 for(i=0;str1[i]!='\0';i++){
	 	count++;
	 }
	 printf("%d",count);
	 
	 	for(i=count,j=0;str2[j]!='\0';j++)
	   {
	   	count++;
	   	str1[i]=str2[j];
	   	i++;
	  	
      }
      printf("\n new count-%d",count);
    
    //str1[i]='\0';
    
	 printf("\n String is %s",str1);
	 return 0;
}
