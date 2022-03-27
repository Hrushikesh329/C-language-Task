

//case sensitive code lowercase vowels count

#include<stdio.h>

int Count(char *str)
{
	int icnt=0;
	
	if(str==NULL)
	{return -1;}

	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
		{
			icnt++;
		}
		*str++;
	}
	return icnt;


}
int main()
{
	char Arr[20];
	int iRect=0;
	
	printf("enter string");
	scanf("%[^'\n']s",Arr);
	
	iRect=Count(Arr);
	
	printf("number of Vowels are %d",iRect);	
	return 0;
}	