#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef unsigned int BOOL;

BOOL countdiff(char *str)
{
	int ismall=0;
	int icap=0;

	if(str==NULL)
	{
		return 0;
	}

	while(*str!='\0')
	{
		if(*str=='a'|| *str=='e'||*str=='i'|| *str=='o'||*str=='u'|| *str=='A'||*str=='E'|| *str=='I'||*str=='O'|| *str=='U')
		{
			return TRUE;
			
		}
		
		*str++;
	}
	return FALSE;
	
}

int main()
{
		char Arr[20];
		BOOL bRet=FALSE;
		
		printf("enter character");
		scanf("%[^'\n']s",Arr);
		
		bRet=countdiff(Arr);
		if(bRet==TRUE)
		{
		printf("it contains vowel");
		}
		else
		{
			printf("it not contain vowel");
		}	
		return 0;
}		