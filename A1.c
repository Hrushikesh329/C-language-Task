#include<stdio.h>
#include<stdbool.h>

int SumFactors(int);
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
	
	iRet=SumFactors(iNumber);
	if(iRet==iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}	
}	
	
int SumFactors(int iNo)
{
	int iSum=0,iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
		
	}
		return iSum;
}







