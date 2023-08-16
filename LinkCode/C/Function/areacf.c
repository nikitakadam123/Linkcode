/*************************** Area using function*****************************************/

//type 1- without argument and without return type


#include<stdio.h>.
//void circle()
int main()
{
	printf("\n Area of circle\n");
	circle();
	printf("\n----------------------------\n");
	return 0;
}

void circle()
{
     int r;
	 float ca;
     printf("\nEnter Radius is circle: ");
     scanf("\n%d",&r);
     ca=3.14*r*r;
     printf("\n Area of circle is : %.2f",ca);
}



