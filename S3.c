#include<stdio.h>
int main()
{                     
	char Arr[50];
	printf("enter yoyr name\n");
	scanf("%[^'\n']s",Arr);//%[^'\n']s means joparyant enter yet nhi toparyant 
	 
	printf("your enter name is %s",Arr);
	return 0;	
}	