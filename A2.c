#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	//char CValue='A';
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		
			//printf("%c",'A'+iCnt);
		printf("%d# \t",iCnt);
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