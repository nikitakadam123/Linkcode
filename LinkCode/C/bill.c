#include<stdio.h>

int main()
{
	char customer[10];
	float charges;
	int units;
	printf("Enter Customer Name: ");
	scanf("%c",&customer);
	printf("Enter Units: ");
	scanf("%d",&units);
	if(units <= 200)
	{
		charges = 3.33 * units;
	}
	else if((units>=100)&&(units<=300))
	{
		charges = 100 + 5.55 * (units-200);		
	}
	else if((units>=300)&&(units<=500))

	{
		charges = 230 + 7.77 * (units-400);		
	}
	else if(units>=500)

	{
		charges = 390 + 11.11 * (units-600);		
	}
	printf("\n Customer Number: %d",customer);
	printf("\n Charges = %f",charges);
	return 0;
}
