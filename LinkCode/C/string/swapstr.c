/******************************* Swap String ******************************************/

#include<stdio.h>
int main()
{
	char s1[20],s2[20],s3[20];
	
	int i,j;
	printf("\n String Befor Swapping\n");
	printf("\n Enter 1st string = ");
	scanf("\n %s",&s1);
	printf("\n Enter 2st string = ");
	scanf("\n %s",&s2);
			
    strcpy(s3,s1);
    strcpy(s1,s2);  
    strcpy(s2,s3);
	
	printf("\n String After swaping");
	printf("\n String 1 %s",s1);
	
	printf("\n String 2 %s",s2);

}
