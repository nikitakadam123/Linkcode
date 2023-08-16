/************************************ Reverse of number *************************************/

//Type 1- without argument and without return type

#include<stdio.h>
int main()
{
	reverse();
}

void reverse()
{
       int rev,r,n;
	   printf("\n Enter any number: ");
	   scanf("\n%d",&n);
	   while(n!=0)
	   {
	   	   r= n%10;
	   	   rev=rev*10+r;
	   	   n=n/10;
	   	
		}
		printf("\n Reverse number is: %d",rev);	
}
