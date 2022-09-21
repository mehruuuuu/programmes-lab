//queue
#include<stdio.h>
#define max 100
int queue[max];
void view();
void enqueue();
int dequeue();
int front=0,rear=-1;
int main()
{
	int ch,item,i;
	while(1)
	{
	 printf("1for enqueue,2for dequeue 3for view,4for exit");
	 if(ch==1)
	 {
	 	printf("enter the element to enqueue");
	 	scanf("%d",&item);
	 	enqueu (item);
	 }
	 else if (ch==2)
	 {
	 	item=dequeue();
	 	if(item==-1)
	 	printf("underflow");
	 	else
	 	printf("%d",&item);
	 }
	 else if(ch==3)
	 view();
	 else break;
	}
}

void enqueue(int item)
{
	if(rear<max)
	{
		queue[++rear]=item;
	}
	else
	printf("overflow");
	
}
int dequeue()
{
	if(front<=rear)
	return queue[front++];
	else
	return -1;
}
void view()
{ int i;
	if(front>rear)
	printf("empty");
	else
	{
		for( i=front;i<=rear;i++)
		printf("%d",queue[i]);
	}
}
