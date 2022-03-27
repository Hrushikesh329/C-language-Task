#include<stdio.h>
#include<stdbool.h>



bool CheckDigit(char c)
{
	if((c>='0')&&(c<='9'))// if(c>'a'	&& c<'z')
	{
		return true;
	}
	else
	{
		return false;
	}	
	
}


int main()
{	
	char ch='\0';
	bool bret=false;
	printf("Enter Character");
	scanf("%c",&ch);
	bret=CheckDigit(ch);
	if(bret==true)
	{
		printf("it is a digit");
	}
	else
	{
			printf("it is not digit");
	}		
	return 0;
}	