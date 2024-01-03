#include<stdio.h>
void arraysort(int a[],int limit)
{
 int temp,i,j;
 for(i=0;i<limit;i++)
  for(j=i+1;j<limit;j++)
  if(a[j]<a[i])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
  printf("\nArray after sorting: ");
   for(i=0;i<limit;i++)
   {
    printf("%d\t",a[i]);
   }
  
}
 void main()
 {
  int i,limit,ar[20];
  printf("Enter limit: ");
  scanf("%d",&limit);
  printf("Enter the element= ");
  for(i=0;i<limit;i++)
  scanf("%d",&ar[i]);
  
  printf("\nBefore sorting: ");
   for(i=0;i<limit;i++)
   {
    printf("%d\t",ar[i]);
   }
  
  arraysort(ar,limit);
 }
