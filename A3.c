#include<stdio.h>

int countdiff(char *str)
{
	int ismall=0;
	int icap=0;

	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if(*str>='a'&&*str<='z')
		{
			ismall++;
			
		}
		if(*str>='A'&&*str<='Z')
		{
			icap++;
			
		}
		
		*str++;
	}
	return ismall-icap;
	
	
}

int main()
{
		char Arr[20];
		int iRet=0;
		
		printf("enter character");
		scanf("%[^'\n']s",Arr);
		
		iRet=countdiff(Arr);
		
		printf("%d",iRet);
		
		return 0;
}		