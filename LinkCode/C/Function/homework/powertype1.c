/************************************ Power *************************************/

//Type 1- without argument and without return type

#include<stdio.h>
int main()
{
	 power();
	 return 0;
}

void power()
{
	int base, exp;  
    int result; 
	
	printf (" Enter the base value from the user: ");  
    scanf (" %d", &base);  
    printf (" Enter the power value for raising the power of base: ");  
    scanf (" %d", &exp);
    result = pow ( base, exp);  
    printf (" %d to the power of %d is = %d ", base, exp, result);  
}
