#include<stdio.h>

int  Display(char *Brr)
{	
	int a=0;
	
	
	while(*Brr!='\0')
	{
		if(*Brr>='a'&&*Brr<='z')//(*Brr>='A' && *Brr<='Z')
		{	
		a++;
		}
		Brr++;
			
	}
	return a;
}



int main()
{
	char Arr[50]; 
	int  ch=0;
	 printf("enter yoyr name\n");
	scanf("%[^'\n']s",Arr); 
	 
	ch=Display(Arr);
	 printf("your count %d",ch);
	return 0;
	
}	