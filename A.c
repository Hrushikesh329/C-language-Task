#include<stdio.h>
#include<stdbool.h>


bool CheckPerfect(int);
int main()
{
	int iValue=0;
	bool bRet=false;

	printf("Enter number");
	scanf("%d",&iValue);
	
	bRet=CheckPerfect(iValue);
	if(bRet==true)
	{
		printf("number is perfect\n");
	}
	else
	{
		printf("number is not perfect\n");
	}	
}

bool CheckPerfect(int iNumber)
{
	int iRet=0;
	int iSum=0,iCnt=0;
	
	if(iNumber<0)
	{
		iNumber=-iNumber;
	}	
	
	for(iCnt=1;iCnt<=(iNumber/2);iCnt++)
	{
		if((iNumber%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
		
	}
	if(iSum==iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}	
}
