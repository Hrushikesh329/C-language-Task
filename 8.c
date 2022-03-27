#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int);
int main()
{
	int iNo=0 ;
	bool bRet=false;
	printf("enter a number\n");
	scanf("%d",&iNo);
	
	bRet=CheckEven(iNo);
	if(bRet==true)
	{
			printf("even number\n");
	}
	else
	{
			printf(" not even number\n");
	}
}
bool CheckEven(int iValue)
{
if((iValue%2)==0)
	{
		return true;
	}
	else
	{
		return false	;
	}
	return iValue;
}

















