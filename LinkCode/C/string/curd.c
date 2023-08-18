/****************************** CURD Operation On String ***************************************/

#include<stdio.h>
int main()
{
	int i,j,ch,l=0,c;
	char str[20],search;
	do{
	printf("\n1- Entr sting \n2-Length of String \n3-Reverse of String \n4-Display string \n5- search String \n6-Swap string ");
	printf("\n Enter Your Choice: ");
	scanf("\n%d",&ch);
	
	switch(ch)
	{
		case 1:
			printf("\n Enter any String: ");
			
			
				scanf("%s",str);
			
			
			break;
			
		case 2:
			for(i=0;str[i]!=0;i++)
			{
				l++;
			}
			printf("\n lenght of string is %d",l);
			break;
			
		case 3:
			//l=strlen(str);
			for(i=l-1;i>='\0';i--)
			{
				printf("Revers string is: %c",str[i]);
			}
				break;
		case 4:
			printf("\n Display String: ");
			for(i=0;str[i]!=0;i++)
			{
				printf("\n%s",str);
			}
			break;
		case 5:
			printf("\n Enter any character which u want to search ");
			scanf("\n %c",&search);
			if(str[i]==search)
			{
				printf("\n Element found");
			}
			else{
				printf("\n Element not fount");
			}
			break;
			
	}
    printf("\nDo you want to continue press 1");
	scanf("%d",&c);
	}while(c==1);
return 0;
}

