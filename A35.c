// Ascii Values
//upper case 65-90
//lower case 97-122

#include<stdio.h>
void DisplayConvert(char CValue) 
{
	//char c;
	if(CValue>='A' && CValue<='Z')
	{
		CValue=CValue+32;
		printf("%c",CValue);
	}	
	else if(CValue>='a' && CValue<='z')
	{
		CValue=CValue-32;
		printf("%c",CValue);
	}	
}
int main()
{
	char Cvalue;
	printf("Enter Character\n");
	scanf("%c",&Cvalue);
	DisplayConvert(Cvalue);
	return 0;
}	