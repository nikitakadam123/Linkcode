#include<stdio.h>
int main()
{
	int n1=10;
	int *p1=&n1;
	printf("\n -----------------Without using Pointer------------------------");
	printf("\n Value of veriable is: %d",n1);
	printf("\n Addreses of veriable is: %u",&n1);
	printf("\n -----------------Using Pointer------------------------");
	printf("\n Value of pointer veriable is: %d",*p1);
	printf("\n Addreses of pointer veriable is: %u",p1);
	return 0;
}
