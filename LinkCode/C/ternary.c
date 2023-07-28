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

if ((a>c&&a>b) ? (b>a&&b>c) : (c>a&&c>b))

{
   printf("\n%d is greater then %d",a,b);
}
else if (c>a&&c>b)
{
   printf("\n %d is greater then %d",a,c);
}
else if(b>a&&b>c)
{
	printf("\n %d is greater then %d",b,c);
}
return 0;
}
