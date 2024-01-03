#include<stdio.h>
int a, b,c,d;
int sumaverage()
{
	int sum;
	printf("Enter the mark a :");
	scanf("%d",&a);
	printf("Enter the mark b :");
	scanf("%d",&b);
	printf("Enter the mark c :");
	scanf("%d",&c);
	printf("Enter the mark d :");
	scanf("%d",&d);
	sum=a+b+c+d;
	printf(" sum of  marks: %d\n",sum);
	printf("Average of marks :%d\n ",sum/4);
}
void main()
{
  	sumaverage();
 }	
	
	
	
	
	
	
	
	
