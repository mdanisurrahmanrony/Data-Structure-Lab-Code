#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*head=NULL,*tail=NULL;
void create_D_ll();
void display();
void f_display();
void b_display();
void f_create_D_ll();
void b_create_D_ll();
void main()
{
  create_D_ll();
  display();
  f_create_D_ll();
  f_display();
}
void create_D_ll()
{
    struct node *newnode,*current;
    int i,n;
    printf("Enter number of node:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Error!Memory not allocated.");
        exit(0);
    }
    printf("Enter data of node %d\n",i);
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL)
    {
      head=newnode;
      current=newnode;
      tail=newnode;
    }
    else
    {
      current->next=newnode;
      newnode->prev=current;
      current=newnode;
      tail=newnode;
    }
    }
}
void f_display()
{
    struct node *temp;
    temp=head;
    printf("\nForward Link List is:\n");
    while(temp!=NULL)
    {
        printf("\t-->%d ",temp->data);
        temp=temp->next;
    }
}
void b_display()
{
    struct node *temp;
    temp=tail;
    if(head==NULL)
    {
     printf("\nThere is no node in the list:\n");
    }
    printf("\nForward Link List is:\n");
    while(temp!=NULL)
    {
        printf("\t-->%d ",temp->data);
        temp=temp->prev;
    }
}
void display()
{
 f_display();
 b_display();
}
void f_create_D_ll()
{
    struct node *newnode,*current;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Error!Memory not allocated.");
        exit(0);
    }
    printf("\nEnter data of newnode which will inserted at first in forward link list:\n");
    scanf("%d",newnode->data);
    head=newnode;
    newnode->next=current;
    current->prev=newnode;
}
