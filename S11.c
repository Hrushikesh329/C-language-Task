

#include<stdio.h>




char CheckDigit(char c)// it is mean by toggle
{
	if((c>='A')&&(c<='Z'))// if(c>'a'	&& c<'z')
	{
		c=c+32;
	}
	else if((c>='a')&&(c<='z'))
	{
		c=c-32;
	}	
	return c;
}


int main()
{	
	char ch='\0';
	char cret='\0';
	printf("Enter Character");
	scanf("%c",&ch);
	cret=CheckDigit(ch);
	printf("%c",cret);
	return 0;
}	