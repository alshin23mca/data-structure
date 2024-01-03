#include<stdio.h>
void arraysort(int array[],int n)
{
int temp,i,j;
for(i=0;i<n;i++)
 for(j=i+1;j<n;j++)    
   if(array[j]<array[i])
       {
       temp=array[j];
       array[j]=array[i];
       array[i]=temp;
       }
 printf("\n array after sorting:");
 for(i=0;i<n;i++)
 {
 printf("\t %d",array[i]);
 }
}
void main()
{
int a[20],i,limit;
printf("enter the limit:");
scanf("%d",&limit);
printf("\nenter the elemts:");
for(i=0;i<limit;i++)
 scanf("%d",&a[i]);
printf("\narray before sorting:");
for(i=0;i<limit;i++)
 {
 printf("\t%d",a[i]);
 }
arraysort(a,limit);
}



