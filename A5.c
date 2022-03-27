#include<stdio.h>
int Display(int no)
{
	static int i=0,sum=1;;
	
	if(no!=0)
	{
		i=no%10;
		sum=sum*i;
		no=no/10;
		Display(no);
	}
	return sum;
}

int main()
{
	int value=0,iret=0;
	
	printf("enter number");
	scanf("%d",&value);
	
	iret=Display(value);
	printf("%d",iret);
	return 0;
}	