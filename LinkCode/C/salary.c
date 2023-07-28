#include<stdio.h>

int main()
{
	float Basicsal, Da, Hra, Conveyance, Medical, Gross;
	float Eisc, pf, NetBeforTax,Tds,SalaryHand;
	int tax;
	printf("\n__________________________________________________");
	printf("\n -----------------|Salary slip|-------------------");
	printf("\n\nEnter Basic Salary: ");
	scanf("%f",&Basicsal);
	
	Da = (Basicsal*0.1);
	Hra = Da+(Basicsal*0.5);	
	Conveyance = 1600;
	Medical = 1250;
	Gross = Basicsal+Da+Hra+Conveyance+Medical;
	Eisc = (Gross * 0.0475);
	pf = (Basicsal * 0.12);
	NetBeforTax = Gross-Eisc-pf;
	Tds = (NetBeforTax * 0.05);
	SalaryHand = NetBeforTax-Tds;
	
	if(Basicsal<=500000)
	tax = 0;
	else if(Basicsal=1000000)
	tax = (Basicsal - 500000)* 10/100;
	else if(Basicsal<=1500000)
	tax = 10000 + (Basicsal-1000000)*20/100;
	else
	tax = 250000 + (Basicsal-1500000)*30/100;
	
	
	
	
	printf("\n\n---------------------------------------------------");
	printf("\nBasic               |        %10.2f      ",Basicsal);
	printf("\nDa                  |        %10.2f      ",Da);
	printf("\nHra                 |        %10.2f      ",Hra);
	printf("\nConveyance          |        %10.2f      ",Conveyance);
	printf("\nMedical             |        %10.2f      ",Medical);
	printf("\nEisc                |        %10.2f      ",Eisc);
	printf("\npf                  |        %10.2f      ",pf);
	printf("\nNetBeforTax         |        %10.2f      ",NetBeforTax);
	printf("\nTds                 |        %10.2f      ",Tds); 
	printf("\n---------------------------------------------------");
	printf("\nSalaryHand          |        %10.2f      ",SalaryHand);
	printf("\nTax amount is       |         %d         ",tax);
	printf("\n---------------------------------------------------");
	
	
	return (0);
}
