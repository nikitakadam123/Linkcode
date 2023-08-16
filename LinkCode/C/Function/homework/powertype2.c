/************************************ Power *************************************/

//Type 2- with argument and without return type

#include<stdio.h>
void power(int, int);
int main()
{
	int base, exp;  
  
	
	printf (" Enter the base value from the user: ");  
    scanf (" %d", &base);  
    printf (" Enter the power value for raising the power of base: ");  
    scanf (" %d", &exp);
    power(base, exp);
}

void power(int base,int exp)
{
	int result; 
	result = pow ( base, exp);  
    printf (" %d to the power of %d is = %d ", base, exp, result);
}
