#include<stdio.h>
void search(int a[],int n,int k)
{
 int i,flag=0;
 for(i=0;i<n;i++)
 {
  if(a[i]==k)
  {
   flag=1;
   break;
  }
 }
 if(flag==1)
 {
 printf("Element %d found at %d position",k,i+1);
 }
 else
 {
  printf("element not found");
 }
}

void binary(int a[],int n,int k)
{
 int i,n,mid,l=0,u=n-l;
 int pos=-1;
 sort(array,n);
 mid=(l+u)/2;
 
 
 
}

void sort(int a[],int n)
{
 int temp,i,j;
 for(i=0;i<n;i++)
  for(j=i+1;j<n;j++)
  if(a[j]<a[i])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
  printf("\nArray after sorting: ");
   for(i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
}

void main()
{ 
  int k,array[20],n,i;
  printf("Enter the limit: ");
  scanf("%d",&n);
  printf("Enter the array elements: ");
  for(i=0;i<n;i++)
  {
   scanf("%d",&array[i]);
  }
  printf("Enter the element to be searched: ");
  scanf("%d",&k);
  search(array,n,k);
}
