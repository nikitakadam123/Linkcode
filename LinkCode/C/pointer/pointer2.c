#include<stdio.h>
int main(){
	int n1;
	n1=10;
	int *p1,**p2;
    p1=&n1;
	p2=&p1;

    //int	n1=10;
	//int p1=&n1;
	//int p2=&p1;
	printf("\nValue of n1 is: %d",n1);
	printf("\nAdress of n1 is: %u",&n1);
	printf("\n -----------------Using Pointer------------------------");
	printf("\n Value of pointer veriable is: %d",*p1);
	printf("\n Addreses of n1 using pointer veriable is: %u",p1);
	printf("\nAddress of pointer p1 is: %u",&p1);
	printf("\n -----------------Using Pointer2---------\n");


	printf("\n Value of n1 pointer2 veriable is: %d",**p2);
	printf("\n Addreses of pointer p1 veriable is: %u",p2);
	printf("\n Addreses of pointer p1 veriable is: %u",p2);
	printf("\n Addreses of pointer n1 veriable is: %u",*p2);
 	printf("\nAddress of pointer p2 is: %u",&p2);
	
	return 0;
}
