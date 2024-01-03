#include<stdio.h>
void main()
{
 int i ,size;
 printf("Enter the size of the array: ");
 scanf("%d",&size);
 int arr[size],*p=arr;
 printf("Enter the array elements: ");
 for(i=0;i<size;i++)
 {
  scanf("%d",p+i);
 }
 printf("Array elements are: ");
 for(i=0;i<size;i++)
 {
  printf("%d\n",*(p+i));
 }
}
