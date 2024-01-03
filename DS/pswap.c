#include<stdio.h>

void swap(int*a,int*b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;

}
void main()
{
int i,j;
printf("Enter i and j values:");
scanf("%d %d",&i,&j);
printf("Before Swapping :%d %d\n",i,j);
swap(&i,&j);
printf("After swapping:%d %d\n",i,j);
}


