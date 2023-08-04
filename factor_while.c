#include<stdio.h>

int main()
{
	int n,i;
	printf("\n enter any number: ");
	scanf("\n%d",&n);
	i=2;
	while(i<=n/2)
	{
		if(n%i==0)
		{
			printf("\n %d",i);
		}
		i++;
		
	}
	return 0;
}
