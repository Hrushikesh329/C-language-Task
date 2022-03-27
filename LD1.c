#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node* next;
	struct node*prev;
}NODE,*PNODE,**PPNODE;	

void Insertfirst(PPNODE Head,int no)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;//new node ch address head madhe takych
		(*Head)->prev=newn;//head ch previous madhe new 
		
		*Head=newn;
	}	
	
}
void Insertlast(PPNODE Head,int no)
{
	
	PNODE newn=NULL;
	PNODE temp=*Head;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		newn->prev=temp;	
	}	
}	
void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("%d\n",Head->data);
		Head=Head->next;
	}
	printf("NULL");	
}
int Count(PNODE Head)	
{
	int iCnt=0;
	
	while(Head!=NULL)
	{
		iCnt++;
		Head=Head->next;
	}	
	return iCnt;
}
void DeleteFirst(PPNODE Head)
{
	PNODE temp=*Head;
	if(*Head!=NULL)
	{
		*Head=(*Head)->next;
		free(temp);
		if(*Head!=NULL)//check kartoy Head madhe null ahe ki nhi 
		{
		(*Head)->prev=NULL;
		}
	}	
}
void DeleteLast(PPNODE Head)
{
	PNODE temp=*Head;
	if(*Head==NULL)
	{
		return;
	}
	else if(*Head->next==NULL)
	{
		free(*Head);
		*Head=NULL
	}	
}	

void insertatpos(PPNODE Head,int no,int pos)
{
	int size=Count(*Head);
	PNODE neww=NULL;
	
	if(pos<1||pos>size+1)
	{
		return;
	}	
	
	if(pos==1)
	{
		Insertfirst(Head,no);
		
	}
	else(pos==size+1)
	{
	}	
	else
	{	
	//PNODE neww=NULL;
	neww=(PNODE)malloc(sizeof(NODE));
	
	new->data=no;
	new->next=NULL;
	neww->prev=NULL;
		
	for(i=1;i<pos-1;i++)
	{
		temp=temp->next;
	}
	neww->next=temp->next;
	
	
	
	
	}
}	

int main()
{
	PNODE first=NULL;
	int iRect=0;
	
	Insertfirst(&first,51);
	Insertfirst(&first,21);
	Insertfirst(&first,11);
	
	//Insertlast(&first,101);
	
	Display(first);
	iRect=Count(first);
	printf("count is %d",iRect);
	
	Insertlast(&first,101);
	Display(first);
	//iRect=Count(first);
	//printf("count is %d",iRect);
	
	return 0;
}	