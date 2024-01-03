#include<stdio.h>
void main()
{
 int a[20],i,n,ch;
 printf("enter the limit:");
 scanf("%d",&n);
 printf("enter the elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
  do
  {
  printf("\nMENU");
  printf("\n1.insert element");
  printf("\n2.Deletion");
  printf("\n3.Traverse");
  printf("\n4.Exit");
  printf("\nEnter choice: ");
  scanf("%d",&ch);
  
  
  switch(ch)
  {
   case 1:
   insert(a,n);
   break;
   case 2:
   del(a,n);
   break;
   case 3:
   traverse(a,n);
   break;
   default:
   printf("Exited");
  }
   ch++;
  }while(ch<4);
}  
  
void insert(int a[],int n)
{
  int i,k,m;
  printf("enter the position to be inserted:");
  scanf("%d",&k);
  printf("enter the element:");
  scanf("%d",&m);
  if(n==20)
  {
   printf("no space");
  }
  else
  {
   for(i=n-1;i>=k;i--)
   {
    a[i+1]=a[i];
   }
   a[k]=m;
   n=n+1;
  
   printf("new array :");
   for(i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
  }
}

void traverse(int a[],int n)
{
 
  printf("The array elements are: ");
  for(int i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }

}
void del(int a[],int n)
{
  int d,i,k; 
  printf("enter the position to be deleted:");
  scanf("%d",&d);
  printf("Array after deletion: ");
  for(i=d-1;i<=n+1;i++)
  {
   a[i]=a[i+1];
  }
   n=n-1;
  for(i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
 

}


