#include<stdio.h>
void main()
{
 int a[10],i,size,max;
 int *p;
 printf("Enter the size of array: ");
 scanf("%d",&size);
 printf("Enter the elements in array: ");
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("The array elements are: ");
 for(i=0;i<size;i++)
 {
  printf("%d ",a[i]);
  p=&a[0];
  max=a[0];
  }
  for(i=0;i<size;i++)
  {
    if(max<=*p)
     max=*p;
     p++;
  }
      printf("Largest element in the array is: %d",max);

 }
