#include<stdio.h>
/*enter any two no and print greater no*/

int main()
{
	int no,a,b;
	printf("\n enter first no: ");
	scanf("\n%d",&a);
	printf("\n enter second no: ");
	scanf("\n%d",&b);
	if(a>b)
	{
		printf("\n%d is greater than %d",a,b);
	}
	else if(b>a)
	{
		printf("\n%d is greater than %d",b,a);
	}
	else if(a==b)&&(a==0)
	{
		printf("\n %d%d both no are zero",a,b);
	}
	else
	{
		printf("\n both no are same");
	}
	return 0;
	
}
