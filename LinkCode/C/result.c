#include<stdio.h>

int main()
{
	int rollno;
	char name[10];
	int s1,s2,s3;
	int total;
	float per;
	
	printf("Enter Roll no: ");
	scanf("%d",&rollno);
	
	printf("Enter Name: ");
	scanf("%s",&name);
	
/*	printf("Enter marks for 3 subjects ");*/
/*	scanf("%d%d%d",&s1,&s2,&s3);*/

	printf("\n enter marks for Subject1: ");
	scanf("%d",&s1);

	printf("\n enter marks for Subject2: ");
	scanf("%d",&s2);
	
	printf("\n enter marks for Subject3: ");
	scanf("%d",&s3);


	total= s1+s2+s3;
	per= total/3;
	printf("\n------------------------------------------------------------------\n");
	printf("__________________Student Marksheet____________________________");
	printf("\nRollno \t Name \t sub1 \t sub2 \t sub3 \t total \t percentage");
	printf("\n----------------------------------------------------------------");
	printf("\n%d \t%s \t%d \t%d \t%d \t%d \t%f",rollno,name,s1,s2,s3,total,per);
	printf("\n------------------------------------------------------------------\n");
	
	if((s1>=40)&&(s2>=40)&&(s3>=40))
	{
 	printf("\n Result is PASS");
 	if((per>=35)&&(per<=55))
 	{
 		printf("\n Grade is C");
	 }
	 else if((per>=55)&&(per<=65))
	 {
	 	printf("\n Grade is B");
	 }
	 else if((per>=65)&&(per<=100))
	 {
	 	printf("\n Grade is A");
	 }
	}
	else
	{
		printf("\n Student is FAIL");
	}
	
	
	
	return 0;
}
