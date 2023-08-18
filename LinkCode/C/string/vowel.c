/*********************** vowel and consonants****************************/

#include<stdio.h>
int main()
{
	
	char str[20];
	printf("\n enter any string: ");
	scanf("%s",&str);
	int i,l=0,v=0,c=0;
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("\nstring is: %d",l);
	l = strlen(str);
	 for(i=0; i<l; i++){
	 	
	 
	if((str[i]>='a')&&(str[i]<='z')||(str[i]>='A')&&(str[i]<='Z'))
	{
		switch(str[i])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    v++;
                    break;
                default:
                    c++;
            }
	}

}
	printf("\nvowel is %d",v);
	printf("\nconsonant is %d",c);

	return 0;
}
