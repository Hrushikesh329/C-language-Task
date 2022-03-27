#include<stdio.h>
int Divide(int iNo1,int iNo2)
{
	int iAns=0;
	if( iNo2==0 )
	{
		return -1;
	}
	
	
	iAns=iNo1/iNo2;
	
	
	return iAns;
}
int main()
{
	int iValue1=12,iValue2=2 ;
	int iRect=0;
	iRect=Divide(iValue1,iValue2);
	printf("Divide is %d",iRect);
	//scanf("%d",iRect);
	return 0;
}	
	