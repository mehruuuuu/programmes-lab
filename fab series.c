#include<stdio.h>
int fab(int n)

{
if (n==1 || 2)
    return 1;
  else
return fab(n-1) + fab(n-2);
}
int main()
{
	int n;
	printf( "enter the value of n ");
	scanf("%d",&n);
	 int term=fab(n);
	printf("%dth term is %d",n,term);
	
}
