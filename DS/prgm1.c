#include<stdio.h>
void main()
{ 
 int i,n;

 printf("\n Enter the number\n");
 scanf("%d",&n);
 int fact=1;
 for(i=1;i<=n;i++)
 {
  fact=fact*i;
 }
 printf("\n Factorial of %d is : %d\n ",n,fact);
}	
