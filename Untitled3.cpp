#include<stdio.h>
#define size 100

int main()
{
int a[size],item,pos,n,i;
printf("enter the no. of elements in an array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter the elements");
	scanf("%d",&a[i]);
}
 printf("enter the element to be deleted");
 scanf("%d",&item);
 //search element to delete//
 for(i=0;i<n;i++)
 
 {
 	if(a[i]==item);
 	
 	{
 		pos=i;
 		break;
	 }
 }
 //over write//
 for(i=pos;i<n-1;i++)
 a[i]=a[i+1];
 n=n-1;
 //print arr//
 
 for(i=0;i<n;i++)
 printf("%d",a[i]);



	
}
