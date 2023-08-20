/********************************* Swaping of number *************************************************/

#include<stdio.h>
int main()
{
	int n1,n2,n3,temp;
	
	printf("\n Enter 1st number= ");
	scanf("\n%d",&n1);
	printf("\n Enter 2nd number= ");
	scanf("\n%d",&n2);
	temp=0;
	temp=n1;
	n1=n2;
	n2=temp;
	printf("\n After swapping of two numbers");
	printf("\n 1st number is =%d",n1);
	printf("\n 2nd number is =%d\n",n2);

    printf("\n *************** Without using 3rd variable *************************\n");
    
    printf("\n Enter 1st number= ");
	scanf("\n%d",&n1);
	printf("\n Enter 2nd number= ");
	scanf("\n%d",&n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("\n After swapping of two numbers");
	printf("\n 1st number is =%d",n1);
	printf("\n 2nd number is =%d",n2);
	
}
