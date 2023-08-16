/************************************ Power *************************************/

//Type 4- with argument and with return type

#include<stdio.h>
int power(int,int);
int main()
{
	int base, exp;
	int result; 
    printf (" Enter the base value from the user: ");  
    scanf (" %d", &base);  
    printf (" Enter the power value for raising the power of base: ");  
    scanf (" %d", &exp);
    result=power(base, exp);
    printf ("Power is %d ",result);
    
}
int power(int base,int exp)
{
	
	int result;
    result = pow ( base, exp);
	return result;
	
}
