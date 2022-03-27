#include<stdio.h>
void PrintEven(int iNo)
{	
	int iCnt=0;
	
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=(iNo*2);iCnt++)
	{
		if((iCnt%2)==0)
		{
			printf("%d",iCnt);
		}
		//return 0;
	}		
}	

int main()
{
	int iValue=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	PrintEven(iValue);
    return 0;
}	
	