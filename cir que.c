#include<stdio.h>
#define max 100
int queue[max];
int front=0,rear=-1;
int count=0;
void view();
void enqueue(int item);
int dequeue();
 void enqueue(int item)
{
	if (count==max)
	{
		printf("overflow");
	}
	else
	{
		rear=(rear+1)%(max-1);
		queue[rear]=item;
		count ++;
	}
	
}
int dequeue(item)
{
	if(count==0)

    {
    printf("underflow");
	}
	else
	{
	item=queue[front];
	front=(front+1)%(max-1);	
	return item;
	}
}



void view()
{ int j,i;
	if(count ==0)
	{
		printf("empty");
	}
	else
	j=front;
	{
		for(i=0;i<count;i++)
		{
			printf("%d",queue[j]);
			j=(j+1)%(max-1);
			
		}
	}
	
}
int main()
{
	int ch,item;
	while(1)
	{
		printf("1 for enqueue,2for dequeue, 3for view,4 for  exit");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("enter the item to enqueue");
			scanf("%d",&item);
			enqueue(item);
		}
		else if(ch==2)
		{
			item=dequeue();
			if(item==-1)
			printf("underflow");
			else
			{
				printf("%d",&item);
			}
			
		}
		else if(ch==3)
		view();
		else 
		break;
		
	}
}
