/************************************ Palindrome number ***********************************************/

#include<stdio.h>
int main()
{
	int n,temp,r;
	int sum=0;
	printf("\n Enter any number: ");
	scanf("\n%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\n Number is palindrome ");
	}
	else{
		printf("\n Number is not palindrome ");
	}
	return 0;
}
