
#include<stdio.h>
typedef unsigned int UNIT; // it is used to rename existing   data type   e.g unsignedint is existing datatype that name i give UNIT 
UNIT strlenX(char*str) //unsigned means only positive value input 
{
	int iCnt=0;
	
	if(str==NULL)
	{return 0;
	}	
	
	while(*str!='\0')
	{             
		iCnt++;
		str++;
	}

	return iCnt;
}	



int main()
{
	char Arr[50];
	int iRect=0;
	
	printf("enter your name");
	scanf("%[^'\n']s",Arr);// accept the string without getting enter
	
	iRect=strlenX(Arr);
	printf("length of string is %u",iRect); // %u for unsigned 
	return 0;
}	






















