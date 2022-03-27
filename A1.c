#include<stdio.h>

int countcapital(char *str)
{
	int icnt=0;

	if(str==NULL)
	{
		return 0;
	}

	while(*str!='\0')
	{
		if(*str>='A'&&*str<='Z')
		{
			icnt++;
			
		}
		*str++;
	}
	return icnt;
	
}

int main()
{
		char Arr[20];
		int iRet=0;
		
		printf("enter character");
		scanf("%[^'\n']s",Arr);
		
		iRet=countcapital(Arr);
		
		printf("%d",iRet);
		
		return 0;
}		