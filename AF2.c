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
	
	fd=open(C,O_RDONLY);
	if(fd==-1)
	{
		printf("unable to open file ");
	}	
	else
	{
		printf("file open Succesfully ");
	}	
	
	return 0;
}	