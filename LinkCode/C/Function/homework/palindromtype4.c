/******************************** Palindrome***********************************************/

//Type 4- With argument and with return type

#include<stdio.h>
int palindrome(int);
int main()
{
	int r,n,sum=0,temp;
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
		printf("\n palindrome");
		
	}
	else
	{
		printf("\n Not palindrome");
	}
	//sum=palindrome(int n);
	
	
}
int palindrome(int n)

{
	
	int sum,temp,r;
    temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	return sum;
	
}


