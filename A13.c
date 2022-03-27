#include<stdio.h>

void  Display(char *Brr)
{	
	int a=0;
	int A=0;
	
	
	
	while(*Brr!='\0')
	{
		if(*Brr>='a'&&*Brr<='z')//(*Brr>='A' && *Brr<='Z')
		{	
		a++;
		}
		else if(*Brr>='A' && *Brr<='Z')
		{
			A++;
		}	
		
		
		Brr++;
			
	}
	printf("smallest letter are %d\n",a);
	printf("capital letter are %d\n",A);
}



int main()
{
	char Arr[50]; 
	int  ch=0;
	 printf("enter yoyr name\n");
	scanf("%[^'\n']s",Arr); 
	 
	Display(Arr);
	// printf("your count %d",ch);
	return 0;
	
}	