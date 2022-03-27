

#include<stdio.h>
void strrevx(char *start)
{
	char *end=start;
	char temp;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}	
	
	
	
}

int main()
{
char Arr[30];

printf("enter string");
scanf("%[^'\n']s",Arr);

strrevx(Arr);
printf("reverse string %s",Arr);

return 0;
}

	