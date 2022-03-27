#include<stdio.h>

void Display(char *Brr)
{
	printf("Name is %s\n",Brr);
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