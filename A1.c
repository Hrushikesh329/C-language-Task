#include<stdio.h>

void Display(int iRow,int iCol)
{
	
	
	int i=0,j=0;
	char ch='\0';
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='A';j<=iCol;j++,ch++)
		{
			printf("%c",ch);
			
			
		}
		printf("\n");
	}
}

int main()
{
	int iValue=0;
	int iValue1=0;
	
	printf("enter number of rows");
	scanf("%d",&iValue);
	
	printf("enter number of colums");
	scanf("%d",&iValue1);
	
	Display(iValue,iValue1);
	return 0;
}	