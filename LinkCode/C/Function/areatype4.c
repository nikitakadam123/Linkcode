/****************************** Area of circle********************************************/

//type 4 - With argument with return type

#include<stdio.h>
int circle(int);
int main()
{
	int r,area;
	printf("\n Enter radius of circle: ");
	scanf("\n%d",&r);
	area=circle(r);
	printf("\n Area of circle is %d0.2f",area);
	return 0;
	
}
int circle(int r)
{
	int area;
	area=3.14*r*r;
	
	return area;
}
