//singly linklist operations

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* Next;	
};	

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));//step1 Allocation the memory
					
	//step 2 initialize the node
	newn->data=no;
	newn->Next=NULL;
	
	//step 3 insert the node
	//step 3 insert the node
	if(*head==NULL)
	{
		*head=newn;
	}	
	else
	{
		newn->Next=*head;//new element ch haat juna element vrr thev
		*head=newn;
	}	
}

void InsertLast(PPNODE head,int no)
{
	PNODE newn=NULL;
	PNODE temp=*head;
	newn=(PNODE)malloc(sizeof(NODE));//step1 Allocation the memory
					
	//step 2 initialize the node
	newn->data=no;
	newn->Next=NULL;
							
	//step 3 insert the node
	if(*head==NULL)
	{
		*head=newn;
	}	
	else
	{
		while(temp->Next!=NULL)
		{
			temp=temp->Next;
		}	
		temp->Next=newn;
	}	
}

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("%d\t",Head->data);
		Head=Head->Next;
	}
		
}
int Count(PNODE Head)
{
	int iCnt=0;
	while(Head!=NULL)
	{
		iCnt++;
		Head=Head->Next;
	}	
	return iCnt;
}	
void DeleteFirst(PPNODE Head)
{	
	PNODE temp=*Head;//head ch address temp madhe kadhun ghetla
	if(*Head!=NULL)
	{
		*Head=(*Head)->Next;//direct point to next address karan first madhe aplya pudch addresss phaje
		free(temp);//head madhla first address delete
	}
	
}
void DeleteLast(PPNODE Head)
{	PNODE temp=*Head;
	if(*Head==NULL)
	{
		return ;
	}
	else if((*Head)->Next==NULL)
	{
		free(*Head);
		*Head=NULL;//to convey first to ll is empty
	}
	else
	{
		while(temp->Next->Next!=NULL)
		{
			temp=temp->Next;
		}
		free(temp->Next);
		temp->Next=NULL;	
	}	
	
}	
int main()
{
	PNODE first=NULL;
	int iRect=0;
	InsertFirst(&first,51);//insert (50,51)
	InsertFirst(&first,21);//insert(50,21)
	InsertFirst(&first,11);//insert(50,11)
	
	Display(first);//call by value
	iRect=Count(first);
	printf("%d\n",iRect); 
	//return 0;
	DeleteFirst(&first);
	iRect=Count(first);
	printf("%d\n",iRect); 
	return 0;
}	