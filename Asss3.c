#include<stdio.h>
void Display(int iNo)
{
	if(10<iNo)
	{
		printf("Hello");
	}
	else
	{
		printf("Demo");
	}
}
int main()
{
		int iValue=0;
		printf("enter number");
		scanf("%d",&iValue);
		Display(iValue);
		return 0;
}
		
		