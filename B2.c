#include<stdio.h>

void DisplayPattern(int,int);
	
int main()
{
	int iValue1=0;
	int iValue2=0;
	
	printf("Enter number rows\n"); 
	scanf("%d",&iValue1);
	
	printf("Enter number columns\n"); 
	scanf("%d",&iValue2);
	
	DisplayPattern(iValue1,iValue2);
	
	return 0;
}	


void DisplayPattern(int row,int coloum)
{
	int iCnt1=0;
	int iCnt2=0;
	for(iCnt1=1;iCnt1<=row;iCnt1++)
	{	
		for(iCnt2=1;iCnt2<=coloum;iCnt2++) 
		{
			printf("%d\t",iCnt2);
		}
	printf("\n");
	}
}