#include<stdio.h>
#include<malloc.h>
void create();
void view();
void insert();
void delete();
struct node 
{
	int data;
	struct node*next;
	
};
struct node *head= NULL, *tail= NULL;
int main()
{
	int ch ;
	while(1)
	{
		printf ( " enter 1 for create ,2 for view, 3 for insert , 4 for delete, 5 for exit ");
		scanf("%d",&ch);
		if (ch==1) create();
		if (ch==2) view();
		if(ch==3) insert();
		if( ch==4) delete();
		if ( ch==5) break; 
	}
}
void create()
{
	int n,i;
	struct node *temp;
	printf("enter the no. of nodes you want to create ");
	scanf("%d",&n);
	for(i=0;i<n;i++);
	{
		temp=(struct node *) malloc (sizeof( struct node));
		printf ("enter data");
		scanf("%d",&temp->data );
		temp->next= NULL;
		if (head== NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			tail->next=temp;
			tail=temp;
		}
	}
}
void view()
{
	struct node*trav;
	trav=head;
	while (trav!= NULL)
	{
		printf("%d",trav->data );
		trav=trav->next;
	}
}
void insert()
{
	int item,value;
	struct node *temp,*trav;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the data you want to insert");
	scanf("%d",&temp->data );
	temp->next= NULL;
	printf("enter the node after which you want to insert");
	scanf("%d",&value);
	trav=head;
	while(trav->data !=value)
	trav= trav->next;
	temp->next=trav->next;
	trav->next=temp;
}
void delete()
{
	struct node *temp,*trav;
	int item;
	printf("enter the node you want to delete");
	scanf("%d",&item);
	if(head->data==item)
	{
		
	temp=head;
	head=head->next;
	free(temp);
	}
	else  
	(trav->next==tail);
	{
	trav-> next= NULL;
	free(temp);
	}
	
//		trav=head;
//		while( trav->next->data!=item)
//		trav=trav->next;
//		temp=trav->next;
//		trav->next=trav->next->next;
//		free(temp);
//		
	}
	 

