#include<stdio.h>
void main()
{
printf("Enter a number: ");
scanf("%d",&n);
int n,m;
m=n/2;
for(i=2;i<=m;i++)
{
 if(n%i==0)
 {
  flag=1;
  break;
  printf("%d is not a prime",n);
 }
 else
 {
  printf("%d is an prime number",n)
 }
}
}
