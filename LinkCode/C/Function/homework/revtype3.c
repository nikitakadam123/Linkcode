/************************************ Reverse of number *************************************/

//Type 3- without argument and with return type

#include<stdio.h>
int main()
{
	int rev;
	rev=reverse();
	printf("\n Reverse no: %d",rev);
	
}
int reverse()
{
	int i,rev,n,r;
	printf("\n Enter any number: ");
	scanf("\n %d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
	
}

