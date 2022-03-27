#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	char C[30];
	int fd=0,iRet=0;
	char Buffer[10];
	printf("Enter file name");
	scanf("%s",C);
	
	fd=open(C,O_RDONLY);
	//fd=write(1,C);
	if(fd==-1)
	{
		printf("unable to open file ");
	}	
	else
	{
		printf("file open Succesfully ");
	}	
	
	while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
	{
		write(1,Buffer,iRet);
	}	
	close(fd);
	return 0;
}	