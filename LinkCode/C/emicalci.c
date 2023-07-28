#include<stdio.h>
/* emi calculator*/

int main()
{
	int n;
	float p,R,r,emi;
	printf("\n enter principal amount:");
	scanf("%d",&p);
	printf("\n enter interest rate:");
	scanf("%f",&R);
	printf("\n enter number of months");
	scanf("%d",&n);
	r = R/(12*100);
	emi = p * R * (1+r,n)/((1+r,n)-1);
	
	printf("\n month emi: %f",emi);
	
	return 0;
}
