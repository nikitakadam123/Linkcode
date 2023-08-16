/*************************** Area using function*****************************************/

#include<stdio.h>
//void circle()
int main()
{
	printf("\n Area of circle");
	circle();
	printf("\n----------------------------");
	printf("\n Area of triangle");
	triangle();
	printf("\n----------------------------");
	printf("\n Area of rectriangle");
	rectriangle();
	printf("\n----------------------------");
	return 0;
}

void circle()
{
     int r;
	 float ca;
     printf("Enter Radius is circle: ");
     scanf("\n%d",&r);
     ca=3.14*r*r;
     printf("\n Area of circle is : %f",ca);
}

void triangle()
{
     int r,ca;
     printf("Enter Radius is circle: ");
     scanf("\n%d",&r);
     ca=3.14*r*r;
     printf("\n Area of circle is : %d",ca);
}

