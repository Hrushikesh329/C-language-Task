#include<stdio.h>
#include<stdlib.h>//for malloc &calloc

struct node //self referential structure
//size od struct node is 12=4+8 
{
	int Data;//4
	struct node *next;//8
};	

typedef struct node NODE;//it replacement for struct node
typedef struct node * PNODE;//it replace for struct node*
typedef struct node ** PPNODE;//it replace for struct node**

int main()
{
	PNODE First=NULL;//struct node *//size 8
	NODE obj;//12 byte
	
	printf("%d",sizeof());
	
	return 0;
}	