#include<stdio.h>
void Display(int no)
{
	static int i=1;
	
	if(i<=no)
	{
		printf("%d*",no);
		no--;
		Display(no);
	}
	
}

int main()
{
	int value=0,iret=0;
	
	printf("enter number");
	scanf("%d",&value);
	
	Display(value);
	
	return 0;
}	