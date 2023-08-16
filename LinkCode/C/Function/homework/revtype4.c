/************************************ Reverse of number *************************************/

//Type 4- with argument and with return type

#include<stdio.h>
int reverse(int);
int main()
{
	int n,r,rev;
	printf("\n Enter any number: ");
	scanf("\n%d",&n);
	rev=reverse(n);
	printf("\n Reverse no. is: %d",rev);
	
}
int reverse(int n)
{
	int r,rev;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
}
