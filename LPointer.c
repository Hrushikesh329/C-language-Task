#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct *next;
};	

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
	NODE obj;//12 byte//obj it a static
	
	
	obj.data=11;
	obj.next=NULL;
	
	PNODE p=NULL;//8  byte
	p=&obj;
	
	PPNODE q =NULL;//8byte
	q=&p;
	return 0;
}	


int main()//dyanamic  in dynamic we cant create object because malloc send address it a HEAP memory
{
	PNODE p=NULL;
	PPNODE q=NULL;
	
	p=(PNODE)malloc(sizeof(NODE));
	return 0;
}	