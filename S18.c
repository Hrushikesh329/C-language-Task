
//accept strung from user and check its pallendrom or not

// * asel trr data bheto *nesal trr address

#include<stdio.h>
#include<stdbool.h>
int ChkPallindrome(char *str)
{	
	char *start=NULL;
	char *end=NULL;
	start=str;
	end=str;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		if(*start!=*end)
		{
			break;
		}
		start++;
		end--;
	}
	
	if(start<end)
	{
		return false;
	}
	else
	{
		return true;
	}	

}
int main()
{
	char Arr[20];
	bool bRect=false;
	//char Cvalue='\0';
	
	printf("enter string");
	scanf("%[^'\n']s",Arr);
		 
	
	bRect=ChkPallindrome(Arr);
	if(bRect==true)
	{
		printf("it a pallindrome\n");
	}
	else 
	{
		printf("it not pallindrome\n");
		
	}
		
	return 0;
}	