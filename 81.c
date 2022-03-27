

#include<stdio.h>
void  DisplayFactors(int);


int main()
{
	int iNo=0;
	
	
	printf("enter number\n");
	scanf("%d",&iNo);
	
	DisplayFactors(iNo);
	return 0;
}

void DisplayFactors(int iValue)
{
	
	int iCnt=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}	
	
	for(iCnt=1;iCnt<=(iValue/2);iCnt++)  // O(n/2)  time complexcity
	{
		if((iValue%iCnt)==0) // iCnt is a factor
		{
			printf("%d\n",iCnt);
		}
	}
		
}
	
	
	
	