#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	int iCnt2=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		//if(iCnt<=iNo)
		//{	
			
			//iCnt2=iCnt*2;
			printf("%d \t",iCnt*2);
		//}
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter number of elements");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}