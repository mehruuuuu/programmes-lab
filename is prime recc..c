#include<stdio.h>
 int prime( int n , int k)
 { int true,false;
 	if(k<=1)
 	{
 		return true;
	 }
	 elseif (n%k==0);
	 {
	 	return false;
	 }
	 return  prime(n,k-1);
	 
 }
 int main()
 { int n,k;
 	k=n-1 ;
 	printf(prime (n,k));
 }
