#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*head=NULL,*tail=NULL;
void create_Dll();
void display_Dll();
void f_dispaly();
void b_dispaly();
void insert_first_ll();
void main()
{
    create_Dll();
    display_Dll();
    /*insert_first_ll();
    display_Dll();*/
}
void create_Dll()
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
        printf("\nEnter data of new node %d\n",i);
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            current=newnode;
        }
        else
        {
            current->next=newnode;
            newnode->prev=current;
            current=newnode;
            tail=current;
        }
    }
}
void display_Dll()
{
    f_dispaly();
    b_dispaly();
}
void f_dispaly()
{
    struct node *temp;
    temp=head;
    printf("\nForward Link List is:\n");
    if(temp==NULL)
    {
        printf("There is no node in the list");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("\t-->%d ",temp->data);
            temp=temp->next;
        }
    }
}
void b_dispaly()
{
    struct node *temp;
    temp=tail;
    printf("\n\nBackward Link List is:\n");
    if(temp==NULL)
    {
        printf("There is no node in the list");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("\t-->%d ",temp->data);
            temp=temp->prev;
        }
    }
}
/*void insert_first_ll()
{
    struct node *newnode,*current;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Error!Memory not allocated successfully.");
        exit(0);
    }
    else
    {
    printf("\nEnter data of newnode to insert at first:\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    current=head;
    while(current->next=NULL)
    {
        current=current->next;
    }
    current->next=tail;
    tail->prev=current;
    tail=current;

    }
}
*/
