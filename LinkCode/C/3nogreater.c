#include<stdio.h>
/* greater with three no*/

int main()
{
	int no;
	int a,b,c;
  printf("\n enter first no: ");
scanf("\n%d",&a);

printf("\n enter second no: ");
scanf("\n%d",&b);

printf("\n enter third no: ");
scanf("\n%d",&c);

if (a>c&&a>b)

{
	printf("\n %d is greater",&a);
}
else if(b>a&&b>c)
{
	printf("\n %d is greater",&b);

}
else if(c>a&&c>b)
{
	printf("\n %d is greater",&c);
}
else if ((a==b&&b==a) && (a>c&&b>c))                            
{
	printf("\n first and second no are same ",a,b);
	printf("\n%d and %d is greater than %d",a,b,c);

}
else if ((b==c&&c==b) && (b>c&&c>b))                            
{
	printf("\n second and third no are same ",b,c);
	printf("\n%d and %d is greater than %d",b,c,a);

}
else if ((c==a&&a==c) && (c>a&&a>c))   
{
	printf("\n first and third no are same ",c,a);
	printf("\n%d and %d is greater than %d",c,a,b);

}                          



return 0;
}
