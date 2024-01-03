#include<stdio.h>
 
int add(int a,int b)
{
 int result=a+b;
 return result; 
}
int sub(int a,int b)
{
 int result=a-b;
 return result;
}
int product(int a,int b)
{
 int result=a*b;
 return result;
}
int divide(int a,int b)
{
 int result=a/b;
 return result;
}
void main()
{
 int a,b,result,c;
 
 do{
 printf("\t\t\t\t\nMENU DRIVEN PROGRAM");
 printf("\t\t\t\t\n1.Addition");
 printf("\t\t\t\t\n2.Subtraction");
 printf("\t\t\t\t\n3.Multiplication");
 printf("\t\t\t\t\n4.Division");
 printf("\t\t\t\t\n5.Exit");
 printf("\t\t\t\t\nEnter your choice: ");
 scanf("%d",&c);
 if((c>=1) && (c<=4))
 {
 printf("\t\t\t\t\nEnter two numbers: ");
 scanf("%d %d",&a,&b);
 }
 
 switch(c)
 {
  case 1:
  printf("\nThe result is: %d",add(a,b));
  break;
  case 2:
  printf("\nThe result is: %d",sub(a,b));
  break;
  case 3:
  printf("\nThe result is: %d",product(a,b));
  break;
  case 4:
  printf("\nThe result is: %d",divide(a,b));
  break;
  default:
  printf("Succesfully Exited!!!!");
 }
 c++;
 }while(c<=5);
 
} 
