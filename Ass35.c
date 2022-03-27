#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool ChkVowel(char Cvalue)
{
	if (Cvalue=='A'||Cvalue=='E'||Cvalue=='I'||Cvalue=='O'||Cvalue=='U')
	{
		return TRUE;
	}
	else
	{
			return FALSE;
	}
}//return Cvalue;

int main()
{
char CVal;
bool bRet=FALSE;
	printf("Enter Character\n");
	scanf("%c",&CVal);
	bRet=ChkVowel(CVal);
	if(bRet==TRUE)
	{
		printf("it is Vowel");
	}
	else
	{
	printf("it is not Vowel");
	}
	return 0;	
}