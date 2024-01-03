#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int info;
    struct node* next;
};
 
struct node* last = NULL;
 

void insertAtFront(int data)
{
   
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
 
    
    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
 
 
    else {
        temp->info = data;
        temp->next = last->next;
 
        last->next = temp;
    }
}

void addatlast(int data)
{
   
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
 
    
    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
 

    else {
        temp->info = data;
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void insertafter()
{

    int data, value;
    struct node *temp, *n;

    printf("\nEnter number after which you want to enter number: \n");
    scanf("%d", &value);
    temp = last->next;
 
    do {
 
       
        if (temp->info == value) {
            n = (struct node*)malloc(sizeof(struct node));
 
            
            printf("\nEnter data to be inserted : \n");
            scanf("%d", &data);
            n->info = data;
            n->next = temp->next;
            temp->next = n;
 
          
            if (temp == last)
                last = n;
            break;
        }
        else
            temp = temp->next;
    } while (temp != last->next);
}
 
 
void deletefirst()
{
    struct node* temp;
 
 
    if (last == NULL)
        printf("\nList is empty.\n");
 
   
    else {
        temp = last->next;
        last->next = temp->next;
        free(temp);
    }
} 

void deletelast()
{
    struct node* temp;
 
    if (last == NULL)
        printf("\nList is empty.\n");
 
    temp = last->next;
 
    
    while (temp->next != last)
        temp = temp->next;
 
   
    temp->next = last->next;
    last = temp;
}

void deleteAtIndex()
{    
    int pos, i = 1;
    struct node *temp, *position;
    temp = last->next;
 
    if (last == NULL)
        printf("\nList is empty.\n");
 
    else {
 
        printf("\nEnter index : ");
        scanf("%d", &pos);
 
        while (i <= pos - 1) {
            temp = temp->next;
            i++;
        }
 
        position = temp->next;
        temp->next = position->next;
 
        free(position);
    }
}

void viewList()
{
    
    if (last == NULL)
        printf("\nList is empty\n");
 
   
    else {
        struct node* temp;
        temp = last->next;
 
        
        do {
            printf("\nData = %d", temp->info);
            temp = temp->next;
        } while (temp != last->next);
    }
}
 

int main()
{
    int ch,n;
    do
    {
    printf("\n1.insertion at front\n2.Insertion at last\n3.Display\n4.Insert Specific position\n5.Deletion at front end\n6.Deletion at last position\n7.Deletionat specific position\n8.Exit\nEnter your choice: ");
    scanf("%d",&ch);
    if(ch==1)
    {
     printf("Enter element to inserted: ");
     scanf("%d",&n);
     insertAtFront(n);
    }
    if(ch==2)
    {
     printf("Enter element to inserted: ");
     scanf("%d",&n);
     addatlast(n);
    }
    if(ch==3)
    {
      viewList();
    }
    if(ch==4)
    {
      insertafter(); 
    }
    if(ch==5)
    {
      deletefirst(); 
    }
     if(ch==6)
    {
      deletelast(); 
    }
    /*if(ch==7)
    {
      deleteAtIndex();
    }*/
    
    ch++;
    }while(ch<=8);
    
   
 
    return 0;
}

