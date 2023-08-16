/************************************ Reverse of number *************************************/

//Type 2- with argument and without return type

#include<stdio.h>
void reverse(int);
int main()
{
	int n;
	printf("\n Enter any number: ");
	scanf("\n %d",&n);
	reverse(n);
	return 0;
}
void reverse(int n)
{
	int r,rev;
	while(n!=0)
	{
		r= n%10;
		rev= rev*10+r;
		n=n/10;
	}
	printf("\n Reverse no. is: %d",rev);
}
