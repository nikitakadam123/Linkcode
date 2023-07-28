#include<stdio.h>

/* enter your choice*/

int main()
{
	float r,a;
	int ch,h,b,t,l,w,n;
	printf("\n Enter your choice: ");
	scanf("\n %d",&ch);
	if(ch==1)
	{
		printf("\n Enter radius of circle: ");
		scanf("\n %f ",&r);
		a = r*r;
		printf("\n %f area of circle: ",a);
	}
	  else if(ch==2)
	{
		printf("\n Enter height of triangle: ");
		scanf("\n %f ",&h);
		printf("\n Enter breadth of triangle: ");
		scanf("\n %f ",&b);
		t = h*b/2;
		printf("\n %f Area of triangle is: ",t);
	}
	else if(ch==3)
	{
		printf("\n Enter lenght of rectangle: ");
		scanf("\n %f ",&l);
		printf("\n Enter width of rectangle: ");
		scanf("\n %f ",&w);
		n = h*b/2;
		printf("\n %f Area of rectangle is: ",n);
	}
	
	
	return 0;
}
