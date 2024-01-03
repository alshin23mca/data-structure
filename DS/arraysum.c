#include<stdio.h>

int add(int a[],int n)
{
  int sum=0;
  for(int i=0;i<=n;i++)
  {
   sum=sum+a[i];
  }
  return sum;
    
}
void main()
{
 int i,n,b[100];
 printf("Enter the size of the array: ");
 scanf("%d",&n);
 printf("Enter the elements: ");
 for(i=1;i<=n;i++)
 {
  scanf("%d",&b[i]);
 }
 int s=add(b,n);

 printf("Sum of elements: %d ",s);

}

