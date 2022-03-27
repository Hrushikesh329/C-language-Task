#include<stdio.h>

void Display(int iRow,int iCol)
{

	
	
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i>=j)
			{
				printf("*",i);
			}	
			
		}
		printf("\n");
	}
}

int main()
{
	int iValue=0;
	int iValue1=0;
	
	
	printf("Enter number rows\n");
	scanf("%d",&iValue);
	
	printf("Enter number coloum\n");
	scanf("%d",&iValue1);
	
	Display(iValue,iValue1);
	return 0;
}	