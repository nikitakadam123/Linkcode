/***************************Area of circle**********************************/

//Type 3- Without argument with return type

#include<stdio.h>
int main()
{
	float ca;
	ca=area1();
	printf("\nArea of circle: %0.2f",ca);
	return 0;
	
}
int area1()
{
	int r;
	float ca;
	printf("\n enter radious of circle: ");
	scanf("%d",&r);
	ca=3.14*r*r;
	return ca;
	
}
