#include<stdio.h>
int str(char *st)
{
	static int i;
	
	if(*st!='\0')
	{
		i++;
		st++;
		str(st);
	}
	return i;
}
int main()
{
	int iret=0;
	char ch[20];
	
	printf("enter string");
	scanf("%[^'\n']S",&ch);
	
	iret=str(ch);
	printf("%d",iret);
}