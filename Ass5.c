#include<stdio.h>



void Accept(int iNO)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iNO;iCnt++)
	{
		printf("*\t");
	}
	

}


int main()
{
	//int iValue=0;
	int iValue=5;
	//printf("Enter the number\n");
	//scanf("%d",&iValue);
	Accept(iValue);
	return 0;
}