#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	char C[30];
	int fd=0;
	
	printf("Enter file name");
	scanf("%s",C);
	
	fd=creat(C,0777);
	if(fd==-1)
	{
		printf("unable to create");
	}	
	else
	{
		printf("file Succesfully create");
	}	
	
	return 0;
}	