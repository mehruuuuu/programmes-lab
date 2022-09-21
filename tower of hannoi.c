#include<stdio.h>
int main()
{
	int n=4;
     	TOH (n,'a','b','c');
}
void TOH ( int n,char big,char middle,char end)
{
	if(n==1)
	printf("%c->%c",big,end);
	else{
		TOH(n-1,big,end,middle);
		printf("%c->%c",  big, end);
		TOH(n-1, middle, big, end);
	}
}
