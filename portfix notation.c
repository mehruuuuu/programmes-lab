#include<stdio.h>
#define max 100
int stack[max];
int top=-1;
char expr[100]=235;

int main()
{
	int a,b,r;
	i=0
	while(expr[i]!='\0')
	{
		if(! is operand (expr[i]))
		{
			push(expr[i]-48)
		}
		else
		{
			a=pop();
			b=pop();
			r=evaluate(a,b,expr[i])
			push(r);
		}
	}
	printf("result=%d",pop());
}
