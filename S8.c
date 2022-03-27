#include<stdio.h>

void DisplayTable()
{
	int i=0;
	for(i=0;i<127;i++)
	{
		printf("%d\t%c\n",i,i);//printf("%d\t%x\t%o\t%c") %d for decimal %X for hexadecimal %o for octal  
	}		
}


int main()
{
	DisplayTable();
	return 0;
}	