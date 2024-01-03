
#include<stdio.h>
void arraymul(int ar[20][20],int ab[20][20],int m,int n)
{
int i,k,j,mul[20][20];
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
  mul[i][j]=0;
  for(k=0;k<n;k++)
  {
 mul[i][j]+=ar[i][k]*ab[k][j];
  }
}
}
printf("\n multiplication of matrix:\n");
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
 printf("%d",mul[i][j]);
 printf("\t");
  }
 printf("\n");
}
}
void arrayadd(int ar[20][20],int ab[20][20],int m,int n)
{
int i,j,sum[20][20];
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
 sum[i][j]=ar[i][j]+ab[i][j];
  }
}
printf("\n sum of matrix:\n");
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
 printf("%d",sum[i][j]);
 printf("\t");
  }
 printf("\n");
}
}
void arraysub(int ar[20][20],int ab[20][20],int m,int n)
{
int i,j,sub[20][20];
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
 sub[i][j]=ar[i][j]-ab[i][j];
  }
}
printf("\n subtraction of matrix:\n");
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
 printf("%d",sub[i][j]);
 printf("\t");
  }
 printf("\n");
}
}
void main()
{
int b=0,ch,i,k,l,j,m,n,a[20][20],c[20][20] ;
printf("\nenter the i and j:");
scanf("%d %d",&k,&l);
printf("\n enter the elemnts of first matrix:");
for(i=0;i<k;i++)
  for(j=0;j<l;j++)
  {
 scanf("%d",&a[i][j]);
 }
printf("\nenter the m and n:");
scanf("%d %d",&m,&n);
printf("\n enter the elemnts of first matrix:");
for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
 scanf("%d",&c[i][j]);
 }

printf("\n  first matrix:\n");
for(i=0;i<k;i++)
{
  for(j=0;j<l;j++)
  {
 printf("%d",a[i][j]);
 printf("\t");
 }
 printf("\n");
}

printf("\n second matrix:\n");
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  {
 printf("%d",c[i][j]);
 printf("\t");
      
  }
 printf("\n");
}
while(b<3)
{
printf("\n1.array addition\n2.array subtraction\n3.array multiplication\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
arrayadd(a,c,k,l);
break;
case 2:
arraysub(a,c,k,l);
break;	
case 3:
arraymul(a,c,k,l);
break;
default:
printf("wrong input");
break;
}
b++;
}
}
