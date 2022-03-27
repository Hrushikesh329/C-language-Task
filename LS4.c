//singly circular linklist

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

void insertfirst(PPNODE Head,PPNODE Tail,int no )
{
	PNODE neww=NULL;
	
	neww=(PNODE)malloc(sizeof(NODE));
	
	neww->data=no;
	neww->next=NULL;
	
	
	
	if((*Head==NULL)&&(*Tail==NULL))
	{
		*Head=neww;
		*Tail=neww;
	}
	else
	{
		neww->next=*Head;
		*Head=neww;
		
	}
	(*Tail)->next=*Head;//to maintain circular nature
}	

void insertlast(PPNODE Head,PPNODE Tail,int no)
{
	PNODE neww=NULL;
	
	neww=(PNODE)malloc(sizeof(NODE));
	
	neww->data=no;
	neww->next=NULL;
	
	
	
	if((*Head==NULL)&&(*Tail==NULL))
	{
		*Head=neww;
		*Tail=neww;
	}
	else
	{
	(*Tail)->next=neww;
	*Tail=neww;
	
	}
	(*Tail)->next=*Head;//to maintain circular nature
}	
	
void Display(PNODE Head,PNODE Tail)
{
	if(Head==NULL&&Tail==NULL)
	{
		return ;
	}	
	
	do{
		printf("   %d   ",Head->data);
		Head=Head->next;
	}while(Head!=Tail->next);
}
int  Count(PNODE Head,PNODE Tail)
{
	int icnt=0;
	if(Head==NULL&&Tail==NULL)
	{
		return 0;
	}	
	
	do{
		icnt++; 
		Head=Head->next;
	}while(Head!=Tail->next);
	return icnt;
}
void Deletefirst(PPNODE Head,PPNODE Tail)
{
	if(*Head==NULL&&*Tail==NULL)
	{
		return;
	}
	else if(*Head==*Tail)
	{
		free(*Head)
		*Head=NULL;
		*Tail=NULL;
	}
	else
	{
		*Head=(*Head)->next;
		free((*Tail)->next);
		(*Tail)->next=*Head;
	}
	
}

void Deletelast(PPNODE Head,PPNODE Tail)
{
	PNODE temp=*Head;
	if(*Head==NULL&&*Tail==NULL)
	{
		return;
	}
	else if(*Head==*Tail)
	{
		free(*Head)
		*Head=NULL;
		*Tail=NULL;
	}
	else
	{
		while(temp->next!=*Tail)
		{
			temp=temp->next;
		}
	free(*Tail);
	*Tail=temp;
	(*Tail)->next=*Head;
	}
}	
void insertAtpos(PPNODE Head,PPNODE Tail,int no,int ipos )
{
}
void DeleteAtpos(PPNODE Head,PPNODE Tail,int no,int ipos )
{
}	
int main()
{
	int iret=0;
	PNODE first=NULL;
	PNODE tail=NULL;
	
	insertfirst(&first,&tail,51);
	insertfirst(&first,&tail,21);
	insertfirst(&first,&tail,11);
	
	insertlast(&first,&tail,100);
	
	Display(first,tail);
	
	iret=Count(first,tail);
	printf("   %d   ",iret);
	return 0;
}	