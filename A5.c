#include<stdio.h>

void Reverse(char *str)
{
	int ismall=0;
	int icap=0;
	int bas=0;

	if(str==NULL)
	{
		bas;
	}
	while(*str!='\0')
	{
		ismall++;
		*str++;
	//printf("%d",ismall);
	}	
	*str--;
	//printf("%d",ismall);
	
	for(icap=ismall;icap>=0;icap--)
	{
		//printf("%d",icap);
		printf("%c",*str);
		str--;
	}
	//return ismall-icap;
	
	
}

int main()
{
		char Arr[20];
		
		
		printf("enter character");
		scanf("%[^'\n']s",Arr);
		
		Reverse(Arr);
		
		
		
		return 0;
}		