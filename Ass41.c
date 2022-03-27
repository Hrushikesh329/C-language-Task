
#include<stdio.h>
int MultFactor(int iNo)
{	
	int iCnt=0;
	int iMul=1;
	
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iMul=iMul*iCnt;
			//printf("%d\n",iMul);
		}
    }	
	return iMul;
}	

int main()
{
	int iValue=0;
	int iRect=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	iRect=MultFactor(iValue);
	printf("Multiplication is %d",iRect);
    return 0;
}	