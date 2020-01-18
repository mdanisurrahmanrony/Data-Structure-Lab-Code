#include<stdio.h>
#include<stdlib.h>
struct node
{
    int x;
    float y;
    struct node *next;
}*head=NULL;
void create_ll()
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
            printf("Error!Memory not allocated successfully.");
            exit(0);
        }
        printf("Enter data of node %d\n",i);
        scanf("%d%f",&newnode->x,&newnode->y);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            current=newnode;
        }
        else
        {
            current->next=newnode;
            current=newnode;
        }
    }
    printf("Link list created successfully.");
}
void display_ll()
{
    struct node *temp;
    printf("Link list is:\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("\t-->%d %.2f",temp->x,temp->y);
        temp=temp->next;
    }
}
void insert_fll()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Error!Memory not allocated.");
        exit(0);
    }
    printf("\nEnter data of node to insert at first:\n");
    scanf("%d%f",&newnode->x,&newnode->y);
    newnode->next=head;
    head=newnode;
}
void insert_lll()
{
    struct node *lastnode,*current;
    lastnode=(struct node*)malloc(sizeof(struct node));
    if(lastnode==NULL)
    {
        printf("Error!Memory not allocated.");
        exit(0);
    }
    printf("\nEnter data of node to insert at last:\n");
    scanf("%d%f",&lastnode->x,&lastnode->y);
    lastnode->next=NULL;
    current=head;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=lastnode;
}
void main()
{
    create_ll();
    display_ll();
    insert_fll();
    printf("After insert at first ");
    display_ll();
    insert_lll();
    printf("After insert at last ");
    display_ll();
}
