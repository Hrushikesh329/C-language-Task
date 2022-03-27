


// check character present or not


#include<stdio.h>

int CountFrequency(char *str,char ch)
{	
	int iCnt=0;

	if(str==NULL)//ont str use for address
	{
		return -1;
	}		
	
		while(*str!='\0')//*str use for data
		{
			if(*str==ch)
			{
				iCnt++;
			}
			str++;
		}
	return iCnt;	
}
int main()
{
	char Arr[20];
	int iRect=0;
	char Cvalue='\0';
	
	printf("enter string");
	scanf("%[^'\n']s",Arr);
	
	printf("enter character");
	scanf(" %c",&Cvalue); //in scanf before % we type space (space use like flush) string enter nunter thambavli manun space takli
	
	iRect=CountFrequency(Arr,Cvalue);
	
	printf("number of frequency are %d",iRect);	
	return 0;
}	