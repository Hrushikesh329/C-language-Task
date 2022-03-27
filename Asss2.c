#include<stdio.h>
void Display(int iNo)
{
	int Cnt=0;
	while(Cnt<iNo)
	{
		printf("*");
		iNo--;
	}
}	


int main()
{
	int iValue=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}	