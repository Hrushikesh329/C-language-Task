#include<stdio.h>
#include<stdbool.h>
//#define TRUE 1
//#define FALSE 0

bool ChkPd(int iNo)
{
	int iDigit=0;
	int iRev=0;
	int iTemo=iNo;
	while(iNo!=0)
	{
			
		iDigit=iNo%10;
		iRev=((iRev*10)+iDigit);	
	    iNo=iNo/10;
	}
	if(iRev==iTemo)
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
		int iValue=0;
	    bool iRet=false;
		
		printf("Enter number");
		scanf("%d",&iValue);
		
		iRet=ChkPd(iValue);
		if(iRet==true)
		{
			printf("it is pd: ");
		}
		else
		{
			printf("it is not pd");
		}	
		return 0;
}		
