#include<stdio.h>
void push(int item);
int pop();
void view();
struct node
{
	int item;
	struct node* next;
};
struct node* top = null,temp;
int main()
{
	int item,ch;
	while(1)
	{
		printf("1 for push ,\n 2for pop,\n 3for view,\n 4for exit");
		scanf("%d",&ch);
		if(ch==1)
		{printf("enter the element to push");
		scanf("%d",&item);
		push(item);
		}
		elseif(ch==2)
		{
		item=pop()
		if item==-1
		printf("under flow");
		else
		printf("%d",item);
		}
		else if (ch==3)
		view();
		    else
		break;
	}
}
void push(int item)
{
	struct node* temp;
	temp=(struct node*)malloc(size of(struct node));
	temp->next=null;
	temp->next=item;
	if(top==null)
	top=temp;
	else{
		temp->next=top;
		top=temp
	}
}
int pop()
{
	int item;
	if(top==null)
	return-1;
	else{
		temp=top->item;
		temp=top;
		top=top->next;
		free(temp);
		return(item);
		
	}
}
void view()
{
	struct node* trav;
	if top==null
	printf("stack is empty");
	else{
		trav=top;
		while(trav!=null)
		{
			printf("%d",trav->item)
			trav=trav->next
		}
	}
}








