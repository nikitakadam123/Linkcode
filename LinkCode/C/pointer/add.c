/************************Program: Addition of two no. using pointer------------------------------*/
#include<stdio.h>
int main()
{
	int n1,n2,add;
	int *p1,*p2,*p3;
	p1=&n1;
	p2=&n2;
	p3=&add;
	printf("\n Enter any two no. ");
	scanf("%d %d",p1,p2);    //&n1,&n2
	//add=n1+n2;
	*p3=*p1 + *p2;
	
	printf("\n Addition is %d",*p3);
}
