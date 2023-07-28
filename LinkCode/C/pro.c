#include<stdio.h>

int main()
{
	int id;
	char name;
	int price;
	int qty;
	int total;
	float cgst;
	float sgst;
	float finaltotal;
	
	printf("enter product id");
	scanf("%d",&id);
	
	printf("enter product name");
	scanf("%s",&name);
	
	printf("enter product price");
	scanf("%d",&price);
	
	printf("enter product quantity");
	scanf("%d",qty);
	
	total=price*qty;
	cgst=total*0.06;
	sgst=total*0.06;
	finaltotal=total+cgst+sgst;
	
	
	printf("\n\t***\t-----------------Product Bill--------------\t***\t");
	printf("\n")
	
	
 	
 	
 	
 	
 	
	
	return 0;
}
