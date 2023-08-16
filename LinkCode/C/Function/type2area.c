/************************** Area of circle ***********************************/

//type 2- With argument without return type

#include<stdio.h>
void area(int);
int main()
{
	int r;
	printf("\n Enter radious of circle ");
	scanf("\n %d",&r);
	area(r);
	printf("\n thank u");
}

void area(int r)
{
	float ca;
	ca=3.14*r*r;
	printf("\n Area of circle is %0.2f ",ca);
}
