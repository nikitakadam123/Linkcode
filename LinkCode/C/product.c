#include<stdio.h>
 
 int main()
 {
 	int id;
 	char name;
 	int qty;
	int price;
	int total;
 	float cgst;
	float sgst;
	float finaltotal;
 	
 	printf("Enter product ID: ");
 	scanf("%d",&id);
 	
 	printf("Enter product Name: ");
 	scanf("%d",&name);
 	
 	printf("Enter product Qty: ");
 	scanf("%d",&qty);
 	
 	printf("Enter product Price: ");
 	scanf("%d",&price);
 	
 	total=price*qty;
 	cgst=total*0.06;
 	sgst=total*0.06;
 	finaltotal=total+cgst+sgst;
 	
 	
 	
 	
 	printf("\n\t***\t---------------Product Bill--------------\t***\t");
 	printf("\n | \t\t Enter Product id:         |\t\t%d",&id);
 	printf("\n | \t\t Enter Product Name:       |\t\t%s",&name);
 	printf("\n | \t\t Enter Product Qty:        |\t\t%d",&qty);
 	printf("\n | \t\t Enter Product Price:      |\t\t%d",&price);
 	printf("\n | \t\t Total is:                 |\t\t%d",&total);
 	printf("\n | \t\t cgst is :                 |\t\t%f",&cgst);
 	printf("\n | \t\t sgst is :                 |\t\t%f",&sgst);
 	printf("\n | \t\t final total is :          |\t\t%f",&finaltotal);
 	printf("\n\t *** \t-----------------Thank you-----------------\t***\t");
 	
 	return 0;
 }
