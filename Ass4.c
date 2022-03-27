#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int Check(int iNo)
{
	if ((iNo%5)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
		int iValue=0;
		int bRect=0;
		printf("enter number");
		scanf("%d",&iValue);
		bRect=Check(iValue);
		if(bRect == TRUE)
		{
			printf("D by 5 ");
		}
		else
		{
			printf("not D by 5");
		}
		return 0;
}		