
#include<stdio.h>



void convert(char *str)
{
	char a='\0';
	
	
	while(*str!='\0')
	{
		//if(*str>='A' && *str<='Z'||*str==' '||*str>='a' || *str<='z')
		//{ 
			if(*str>='a' && *str<='z')
			{	
			*str=*str-32;
			}
			printf("%c",*str);
			*str++;
		//}
		//printf("%c%s",a,*str);
			//*str++;
	}	
}

int main ()
{
		char cvalue[50];
	
		
		printf("enter character");
		scanf("%[^'\n']s",&cvalue);
		
		convert(cvalue);
	
	return 0;
}	