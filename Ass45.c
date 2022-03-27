#include<stdio.h>
int NonFact(int iNo)
{	
	int iCnt=0;
	int iSum=0;
	int iDiff=0;
	int iSUB=0;
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
		if((iNo%iCnt)!=0)
		{
			
			iDiff=iDiff+iCnt;
		}
		iSUB=iSum-Diff;
		
	}
	return(iSUB);
	
}	

int main()
{
	int iValue=0;
	int iRet=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	iRet=NonFact(iValue);
	printf("Summation is :%d",iRet);
    return 0;
}	