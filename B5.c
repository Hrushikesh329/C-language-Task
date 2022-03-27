#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>




int iCountCapitalChar(char Fname[],int iSize )
{
	int Fd=0,i=0,iCnt=0;
	int Bret=0;
	char Buffer[10];
	
	
	Fd=open(Fname,O_RDONLY);
	
	if(Fd==-1)
	{
		printf("unable to open file");
	}
	
read(Fd,Buffer,iSize);
	
	write(1,Buffer,iSize);
	
	close(Fd);
}
int main()
{
	char fname[30];
	int A;
	char iRect=0;
	
	//printf("enter search charcter");
	//scanf("%c",A);
	
	printf("enter file name");
	scanf("%s",fname);
	
	printf("enter number charcter");
	scanf("%d",&A);
	
	iRect=iCountCapitalChar(fname,A);
	

	
	
	return 0;
}
	