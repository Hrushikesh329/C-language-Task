#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("%d",Head->data);
		Head=Head->next;
	}
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
void InserFirst(PPNODE Head,int no)
{
	PNODE neww=NULL;
	neww=(PNODE)malloc(sizeof(NODE));
	
	neww->data=no;
	neww->next=NULL;
	
	if(*Head==NULL)
	{
		*Head=neww;
	}
	else
	{
		neww->next=*Head;
		*Head=neww;
	}	
	
}
void InserLast(PPNODE Head,int no)
{
	PNODE neww=NULL;
	PNODE temp=*Head;
	neww=(PNODE)malloc(sizeof(NODE));
	
	neww->data=no;
	neww->next=NULL;
	
	if(*Head==NULL)
	{
		*Head=neww;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=neww;//null ale ki neww value insert honar
	}	
}		
void DeleteFirst(PPNODE Head)
{	
	PNODE temp=*Head;
	if(*Head!=NULL)
	{
		*Head=(*Head)->next;
		free(temp);
	}	
}	
void DeleteLast(PPNODE Head)
{
	PNODE temp=*Head;
	
	if(*Head==NULL)
	{
		return ;
	}
	else if((*Head)->next==NULL)
	{
		free(*Head);
		*Head=NULL;
	}
	else
	{	
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
	}
}	
void InsertAtPos(PPNODE Head,int no,int ipos)
{
	int size=0;
	size=Count(*Head);//call count function
	PNODE newn=NULL;
	PNODE temp=*Head;
	int i=0;
	if((ipos<1) || (ipos >size+1))//filter
	{
		return;
	}	
	
	if(ipos==1)
	{
		InserFirst(Head,no);
	}
	else if(ipos==size+1)
	{
		InserLast(Head,no);
	}
	else
	{
		newn=(PNODE)malloc(sizeof(NODE));
		
		newn->data=no;
		newn->next=NULL;
		
		for(i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;//temp->next->next=newn 
		temp->next=newn;
	}	

}	
void DeleteAtPos(PPNODE Head,int ipos)
{
	int size=0;
	size=Count(*Head);//call count function
	
	PNODE temp=*Head;
	PNODE target=NULL;
	int i=0;
	if((ipos<1) || (ipos >size))//filter
	{
		return;
	}	
	
	if(ipos==1)
	{
		DeleteFirst(Head);
	}
	else if(ipos==size)
	{
		DeleteLast(Head);
	}
	else
	{	
		for(i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}
		target=temp->next;
		temp->next=target->next;
		free(target);
		
	}	
}	
int main()
{
	PNODE first=NULL;
	int iChoice=1,value=0,iRet=0,pos=0;
	
	while(iChoice!=0)
	{
		printf("Enter the desired operation that you want to perform on linklist");
		printf("1:insert the node at first position\n");
		printf("2:insert the node at last position\n");
		printf("3:insert the node at desired position\n");
		printf("4:Delete  the first node \n");
		printf("5:Delete  the last node \n");
		printf("6:Delete  the  node at desired position \n");
		printf("7:Delete  the contents of linkedlist \n");
		printf("8:count the number of nodes from linked list \n");
		printf("0:terminate the application \n");
		scanf("%d",&iChoice);
		
		switch(iChoice)
		{
			case 1:
			printf("Enter the data to insert\n");
			scanf("%d",&value);
			InserFirst(&first,value);
			break;
			
			case 2:
			printf("Enter the data to insert\n");
			scanf("%d",&value);
			InserLast(&first,value);
			break;
			
			case 3:
			printf("Enter the data to insert\n");
			scanf("%d",&value);
			printf("enter the position");
			scanf("%d",&pos);
			InsertAtPos(&first,value,pos);
			break;
			
			case 4:
			DeleteFirst(&first);
			break;
			
			case 5:
			DeleteLast(&first);
			break;
			
			case 6:
			printf("Enter the position\n");
			scanf("%d",&pos);
			DeleteAtPos(&first,pos);
			break;
			
			case 7:
			printf("Enter linked list are\n");
			Display(first);
			break;
			
			case 8:
			iRet=Count(first);
			printf("number of element  are%d\n",iRet);
			
			break;
			
			case 0:
			
			break;
			
			
		}	
	}	
	return 0;
}	
	