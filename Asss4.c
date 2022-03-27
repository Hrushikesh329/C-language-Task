#include<stdio.h>
int Display(int iNo,int iFrequency)
{
	int i=0;
	for(i=0;i<iFrequency;i++);
	//for(iCnt=0;iCnt<iNO;iCnt++)
	{    
		printf("%d",iNo);
		
	}
}
int main()
{
	int iValue=0;
	int iCount=0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	printf("Enter Frequency");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	
	return 0;
}	






//void Display(int iNO)
//{
//	int iCnt=0;
	
	//for(iCnt=0;iCnt<iNO;iCnt++)
//	{
		//printf("*\t");
	//}
//}
//int main()
//{
	//int iValue=0;
	//printf("Enter the number\n");
	//scanf("%d",&iValue);
	//Display(iValue);
	//return 0;
//}