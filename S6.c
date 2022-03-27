

#include<stdio.h>

void Display(char *Brr)
{	
	//char a;
	
	while(*Brr!='\0')
	{
		printf("%c\n",*Brr);
		Brr++;
	}	

}
int main()
{
	char Arr[50];
	 printf("enter yoyr name\n");
	scanf("%[^'\n']s",Arr); 
	 
	 Display(Arr);
	 //printf("your enter name is %s",Arr);
	return 0;
	
}	