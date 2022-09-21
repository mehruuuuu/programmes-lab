
#include<stdio.h>
int main()
{
	int a[5]={2,3,4,5,6};
	int item,i,j;
	printf("enter the number to delete");
	scanf("%d",&item);
	i=0;
	while( i<5)
	{	 if(a[i]==item)   
	    break;
		i=i++;
		
	}
for(j=0;j<5;j++)

	if (a[j]!=-1)
	
	printf("%d",a[j]);
}
