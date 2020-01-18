#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL;
void create_ll()
{
    struct node *newnode,*current;
    int i,n;
    printf("Enter numbers of node:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Error!memory not allocated.");
            exit(0);
        }
        printf("Enter data of node %d\n",i);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(start==NULL)
        {
            start=newnode;
            current=newnode;
        }
        else
        {
            current->next=newnode;
            current=newnode;
        }
    }
}
void display_ll()
{
    struct node *temp;
    printf("Link list is:\n");
    temp=start;
    while(temp!=NULL)
    {
        printf("\t->%d  ",temp->data);
        temp=temp->next;
    }
}
void insert_nth_ll()
{
    struct node *newnode,*current,*temp;
    int i,pos;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Error!Memory not allocated successfully.");
        exit(0);
    }
    printf("\nEnter data of new node for inserting at nth position:\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    printf("Enter position:\n");
    scanf("%d",&pos);
    if(start==NULL)
    {
      start=newnode;
      current=newnode;
    }
    else
    {
        current=start;
        for(i=1;i<pos-1;i++)
        {
            current=current->next;
        }
        temp=current->next;
        current->next=newnode;
        newnode->next=temp;
    }
}
void delete(int p)
{
    struct node *current,*temp;
    int i;
    current=start;
    for(i=1;i<p-1;i++)
    {
        current=current->next;
    }
    temp=current->next;
    current->next=temp->next;
}
void count()
{
    struct node *temp;
    int ln=0;
    temp=start;
    while(temp!=NULL)
    {
        temp=temp->next;
        ln++;
    }
    printf("\nLength of Link List is %d\n",ln);
}
void search(int d)
{
    struct node *current;
    int pos=1;
    current=start;
    while(current!=NULL)
    {
        if(current->data==d)
        {
            printf("%d Found at position %d",d,pos);
            return;
        }
        current=current->next;
        pos++;
    }
    printf("%d not found in the list",d);
}

void main()
{
    create_ll();
    display_ll();
    /*insert_nth_ll();
    printf("After insert at nth position ");
    display_ll();*/
    int n;
    printf("\nEnter data for search:\n");
    scanf("%d",&n);
    search(n);
    /*int p;
    printf("\nEnter position for delete:\n");
    scanf("%d",&p);
    delete(p);
    printf("After delete ");
    display_ll();
    count();*/
}
