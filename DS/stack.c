#include<stdio.h>
 
  int stack[];
  //int max=10;
  int top=-1;
  void push(int value)
  {
   int max=10;
      if(top==max-1)
   {
    printf("Stack is full, can't perform push");
   }
   else
   {
    stack[++top]=value;
    printf("%d pushed into the stack",value);
   }
  }
  
  void pop()
  {
   if(top==-1)
   {
     printf("Stack is empty, can't perform pop");
   }
   else
   {
     printf("%d popped from stack",stack[top--]);
   }
  }
  
  void display()
  {
   if(top==-1)
   {
    printf("Stack is empty");
   }
   else
   {
    printf("Stack elements: ");
    for(int i=0;i<=top;i++)
    {
     printf("%d",stack[i]);
     printf("\n");
    }
   }
  }
  
  int main()
  {
   int choice,value;
   while(1)
   {
    printf("\nStack Operations: \n");
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    
    switch(choice)
    {
     case 1:printf("Enter the value to push: ");
            scanf("%d",&value);
            push(value);
            break;
     case 2:pop();
            break;
     case 3:display();
            break;
     case 4:printf("EXIT");
            return 0;
     default:printf("INVALID CHOICE!!!");                            
    }
   }
   return 0;
  } 
