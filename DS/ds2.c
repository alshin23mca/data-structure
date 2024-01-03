#include<stdio.h>
void sort(int a[],int n)
{
  for(i=0;i<n;i++)
  {
   for(i=j+1;i<n;i++)
   {
    if(a[i]>a[j])
    {
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;   
    }
   }
  }
}

void main()
{
 int a[20],i,n;
 printf("Enter the limit: ");
 scanf("%d",&l);
  for(i=0;i<=l;i++)
  {
   scanf("%d",a[i]);
  }
 for(i=0;i<=l;i++)
 { 
 printf("Before sorting: %d",a[i]);
 }
  sort(a,n);
}
