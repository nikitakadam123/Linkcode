/************************************ Power *************************************/

//Type 3- without argument and with return type

#include<stdio.h>
int main()
{

	int result;
	result=power();
	printf ("Power is %d ",result);
	
}
int power()
{
	int base, exp;
	int result; 
    printf (" Enter the base value from the user: ");  
    scanf (" %d", &base);  
    printf (" Enter the power value for raising the power of base: ");  
    scanf (" %d", &exp);
    result = pow ( base, exp); 
    return result;
}
