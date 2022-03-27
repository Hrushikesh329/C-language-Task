#include<stdio.h>
int fact(int no)
{
	static int i=1;
	if(no!=0)
	{
		i=i*no;
		no--;
		fact(no);
	}
	return i;
}
int main()
{
	int ivalue=0,iret=0;
	
	printf("enter number");
	scanf("%d",&ivalue);
	
	iret=fact(ivalue);
	printf("%d",iret);
	
	
}	