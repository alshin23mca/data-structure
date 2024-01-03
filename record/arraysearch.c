#include<stdio.h>
void arraysearch(int array[],int n)
{
int m,j,flag=0;
 printf("enter the elemnt to be search:");
 scanf("%d",&j);
for(m=0;m<n;m++)
{
   if(array[m]==j)
     {
      flag=1;
      break;
      }
}
if(flag==1)
{
printf("%d found and position=%d",j,m);

}
else
{
printf("value not found");
}
}
void binary(int ar[],int n1)
{
int pos=0,i,f,l,temp,j,mid,k;
for(i=0;i<n1;i++)
 for(j=i+1;j<n1;j++)    
   if(ar[j]<ar[i])
       {
       temp=ar[j];
       ar[j]=ar[i];
       ar[i]=temp;
       }
 printf("\n array after sorting:");
 for(i=0;i<n1;i++)
 {
 printf("\t %d",ar[i]);
 }
printf("\nenter the elemt to be search:");
scanf("%d",&k);
f=0,l=n1;

while(f<=l)
{

mid=((f+l)/2);
if(ar[mid]==k)
{
pos=1;
break;

}
else if(ar[mid]>k)
{
l=mid-1;
}
else
{
f=mid+1;
}
}
if(pos==1)
{
printf("%d found and at position=%d",k,mid);
}
else
{
printf("value not found");
}

}


void main()
{
int ch,b=1,i,a[20],limit;
printf("\nenter the limit:");
scanf("%d",&limit);
printf("\n enter the elemnts:");
for(i=0;i<limit;i++)
{
 scanf("%d",&a[i]);
 }
 while(b<3)
 {
 printf("\n1.linear search\n 2.binary search\n enter your choise:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 arraysearch(a,limit);
break;
case 2:
binary(a,limit);
break;
}
b++;
}
}

