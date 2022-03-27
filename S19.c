

//Accept string from user and reverse that string

#include<stdio.h>

void Swap(char *p,char *q)
{
char temp;

temp=*p;
*p=*q;
*q=temp;
}

int main()
{
	char ch1,ch2;
	printf("Enter first character\n");
	scanf("%c",&ch1);
	
	printf("Enter second  character\n");
	scanf(" %c",&ch2);
	
	printf("before swapping %c %c ",ch1,ch2 );
	
	Swap(&ch1,&ch2); // call by address
	
	printf("after swapping%c %c",ch1,ch2);
	
	return 0;
}	