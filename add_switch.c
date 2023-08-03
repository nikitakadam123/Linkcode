#include<stdio.h>

int main()
{
	int ch,no1,no2;
	int add,sub,mul,div;
	
	menu : 
	
	printf("\n Enter 1st number: ");
	scanf("\n%d",&no1);
	printf("\nEnter 2nd number");
	scanf("\n%d",&no2);
	printf("\n Enter your choice: ");
	scanf("\n%d",&ch);
	 switch(ch)
	 {
	 	case 1:
	 		add=no1+no2;
	 		printf("\nAddition is: ",no1,no2,add);
	 	break;
	 	
	 	case 2:
	 		sub=no1-no2;
	 		printf("\n Substraction is: ",no1,no2,sub);
	 		break;
	 		
	 	case 3:
	 		mul=no1*no2;
	 		printf("\n Multiplication is: ",no1,no2,mul);
	 		break;
	 		
	 	case 4:
	 		div=no1/no2;
	 		printf("\n Division is: ",no1,no2,div);
	 		break;
	 		
	 		default:
	 			printf("\n Invalid Choice...");
	 			
	 }
	 printf("\n Do you want to continue press 1: ");
	scanf("\n%d",ch);
	if(ch==1)
	{
		goto menu;
    }
    return 0;
}
