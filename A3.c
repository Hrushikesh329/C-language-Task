#include<stdio.h>

int power(int,int);

int main()
{
	int iValue=0;
	int iValue1=0;
		int iRet=0;
	printf("enter first number");
	scanf("%d",&iValue);
	
	printf("enter second number ");
	scanf("%d",&iValue1);
	
	iRet=power(iValue,iValue1);
	printf("%d",iRet);
	return 0;
}

int power(int iNo,int iNo1)
{
	int icnt=0;
	//int icct=0;
	int MUl=1;	
	//if(iNo==0)
	//{
		//return;
//	}
	if(iNo<0)
	{
		iNo=-iNo;
	}	
	for(icnt=1;icnt<=iNo1;icnt++)
	{
		MUl=MUl*iNo;
		//printf("%d\n",MUl);
	}
		return MUl;
}		
	