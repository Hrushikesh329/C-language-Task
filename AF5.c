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
	iRet=lseek(fd,0,2);
		printf("file Size is %d",iRet);
		
		//lseek(fd,0,2);
	close(fd);
	return 0;
}	