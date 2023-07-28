#include<stdio.h>

/* if program*/

int main()

{
	int age;
	printf("\n enter your age: ");
	scanf("\n%d",&age);
	if(age>=15)
	{
		printf("\n young");
	//	age = -age;//20
	}
	 else if(age<=15)
	 {
	 	printf("\n child");
	 }
	 else if(age>=20)
	 {
	 	printf("\n adult");
	 }
	
//	printf("\n your age is: %d",age);
	return 0;
}
