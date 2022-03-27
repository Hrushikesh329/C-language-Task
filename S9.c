#include<stdio.h>
#include<stdbool.h>



bool CheckCapital(char c)
{
	if((c>='A')&&(c<='Z'))// if(c>'a'	&& c<'z')
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
	bret=CheckCapital(ch);
	if(bret==true)
	{
		printf("it it capital");
	}
	else
	{
			printf("it is not capital");
	}		
	return 0;
}	