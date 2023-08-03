#include<stdio.h>
int main()
{
	int i,n1=0,n2=1,n3,number;
	printf("\n Enter any number: ");
	scanf("\n%d",&number);
	
	printf("\n%d %d",n1,n2);
	for(i=2;i<number;++i)
	{
	    	n3=n1+n2;
           	printf("\n%d",n3); 	
           	n1=n2;
           	n2=n3;
	}
	
    return 0;
	
	
}
