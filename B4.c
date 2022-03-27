
#include<stdio.h>



void Display(char *str)
{
	char a='\0';
	
	
	while(*str!='\0')
	{
		//if(*str>='A' && *str<='Z'||*str==' '||*str>='a' || *str<='z')
		//{ 
			if(*str>='0' && *str<='9')
			{	
				printf("%c",*str);
				
			}
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
		
		Display(cvalue);
	
	return 0;
}	