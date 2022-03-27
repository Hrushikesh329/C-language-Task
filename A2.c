#include<stdio.h>

void Table(int);

int main()
{
	int iValue=0;
	 
	printf("enter number");
	scanf("%d",&iValue);
	
	Table(iValue);
	return 0;
}

void Table(int iNo)
{
	int icnt=0;
	int MUl=0;	
	if(iNo==0)
	{
		return;
	}
	if(iNo<0)
	{
		iNo=-iNo;
	}	
	for(icnt=1;icnt<=10;icnt++)
	{
		MUl=iNo*icnt;
		printf("%d\n",MUl);
	}
		//printf("%d\n",MUl);
}		
		