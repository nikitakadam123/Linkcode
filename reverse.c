 #include<stdio.h>
 int main()
 {
 	int n,rev,r;
 	printf("\nEnter any number= ");
 	scanf("\n%d",&n);
 	while(n!=0)
 	{
 		r=n%10;
 		rev=rev*10+r;
 		n=n/10;
 		
	 }
	 printf("\n Reverse number is %d ",rev);
	 return 0;
 }
