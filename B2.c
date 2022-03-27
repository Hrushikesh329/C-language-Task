#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>




int iCountCapitalChar(char Fname[])
{
	int Fd=0,i=0,iCnt=0;
	int Bret=0;
	char Buffer[10];
	
	
	Fd=open(Fname,O_RDWR);
	
	if(Fd==-1)
	{
		printf("unable to open file");
	}

	while((Bret=read(Fd,Buffer,sizeof(Buffer)))!=0)
	{
		for(i=0;i<Bret;i++)
		{	
			if(Buffer[i]>='a'&&Buffer[i]<='z')
			{
				iCnt++;
			}	
		}
	}
	return iCnt;
}
int main()
{									
	char fname[30];
							
	int iRect=0;
					
	printf("enter file name");
	scanf("%s",fname);
								
	iRect=iCountCapitalChar(fname);
										
	printf("Small character count is %d",iRect);
									
	return 0;
}
	