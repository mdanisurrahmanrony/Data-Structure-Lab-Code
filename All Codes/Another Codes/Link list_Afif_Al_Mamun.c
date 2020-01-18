/*Linked list operations
Afif Al Mamun */

//NOTE: Don't try any exception, won't work!

#include <stdio.h>
#include <stdlib.h>


struct l_list
{
    int data;
    struct l_list *next;
};

typedef struct l_list node;

node *head=NULL, *current = NULL;

void create();
void insert();
void insertatfirst();
void insertatlast();
void insertatn();
void display();
void del();
void count();
void search();

void main()
{
    printf("------Choose operations from below menu------\n");

    int i=1;

    while(i!=0)
    {
        printf("\n1: Create\n2: Insert\n3: Display\n4: Delete\n5: Count\n6: Search\n0: Exit\n\n");
        printf("Your Choice: ");
        scanf("%d",&i);

        switch(i)
        {
        case 1:
            printf("\n------->Create<-------\n");
            create();
            break;

        case 2:
            printf("\n------->Insert<-------\n");
            insert();
            break;

        case 3:
            printf("\n------->Display<-------\n");
            display();
            break;

        case 4:
            printf("\n------->Delete<-------\n");
            del();
            break;

        case 5:
            printf("\n------->Count<-------\n");
            count();
            break;

        case 6:
            printf("\n------->Search<-------\n");
            search();
            break;

        case 0:
            printf("\n------->Exit<-------\n");
            break;

        default:
            printf("\nInvalid Input.\n");
            break;
        }
    }
}

void create()
{
    node *newnode;

    int i, x;

    printf("\nEnter how many nodes you want to create: ");
    scanf("%d",&x);

    for(i=0;i<x;i++)
    {
        newnode = (node*)malloc(sizeof(node));

        if(newnode == NULL)
        {
            printf("Memory allocation failed!\n");
            exit;
        }

        newnode->next = NULL;

        printf("Enter data for new node: ");
        scanf("%d",&newnode->data);

        if(head==NULL)
        {
            head = newnode;
            current = newnode;
        }

        else
        {
            current->next = newnode;
            current = newnode;
        }
    }
}

void insert()
{
    printf("\nChoose the new node position: \n");
    printf("1: First\n2: Last\n3: N-th\n");

    int i;

    printf("Your choice: ");
    scanf("%d",&i);

    switch(i)
    {
    case 1:
        printf("\n------->First<-------\n");
        insertatfirst();
        break;

    case 2:
        printf("\n------->Last<-------\n");
        insertatlast();
        break;

    case 3:
        printf("\n------->N-th<-------\n");
        insertatn();
        break;

    default:
        printf("Invalid input!\n");
        break;
    }
}

void insertatfirst()
{
    node *newnode;

    newnode = (node*)malloc(sizeof(node));

    if(newnode==NULL)
    {
            printf("Memory allocation failed!\n");
            exit;
    }

    newnode->next=NULL;

    printf("\nEnter data for new node: ");
    scanf("%d",&newnode->data);

    if(head==NULL)
    {
        head = newnode;
        current = newnode;
    }

    else
    {
        newnode->next = head;
        head = newnode;

    }
}

void insertatlast()
{
    node *newnode;

    newnode = (node*)malloc(sizeof(node));

    if(newnode==NULL)
    {
            printf("Memory allocation failed!\n");
            exit;
    }

    newnode->next=NULL;

    printf("\nEnter data for new node: ");
    scanf("%d",&newnode->data);

    if(head==NULL)
    {
        head = newnode;
        current = newnode;
    }

    else
    {
        current->next = newnode;
        current = newnode;
    }
}

void insertatn()
{
    node *newnode, *temp, *temp1;
    int i, position;

    temp = head;

    newnode = (node*)malloc(sizeof(node));

    if(newnode==NULL)
    {
            printf("Memory allocation failed!\n");
            exit;
    }

    newnode->next = NULL;

    printf("\nInsert the position after what you want to add the new node: ");
    scanf("%d",&position);

    printf("Enter data for new node:\n");
    scanf("%d",&newnode->data);


     if(head==NULL)
    {
        head = newnode;
        current = newnode;
    }

    else
    {
            for(i=1;i<position;i++)
                temp = temp->next;

            temp1 = temp->next;

            temp->next = newnode;
            newnode->next = temp1;
    }

}

void display()
{
    node *temp;
    int i =1;

    temp = head;

    while(temp!=NULL)
    {
        printf("\nNode %d: Stored data %d\n",i,temp->data);

        i++;
        temp = temp->next;
    }
}

void del()
{
    node *temp, *temp1;
    int i, position;

    temp =head;

    printf("\nEnter the node position you want to delete:\n");
    scanf("%d",&position);

    for(i=1;i<position-1;i++)
        temp = temp->next;

    temp1 = temp->next;

    temp->next = temp1->next;

    printf("Node deleted successfully!\n");
}

void count()
{
    node *temp;

    temp = head;

    int counter = 0;

    while(temp!=NULL)
    {
        counter++;
        temp = temp->next;
    }

    printf("\n%d nodes exist in the linked list!\n",counter);

}

void search()
{
    int n, i=1, truth=0;
    node *temp;


    printf("\nEnter the value you want to search on the linked list: ");
    scanf("%d",&n);

    temp = head;

    while(temp!=NULL)
    {
        if(temp->data==n)
        {
            truth++;
            printf("Value %d found at node %d!\n",n,i);
            break;
        }

        i++;
        temp = temp->next;
    }

    if(truth==0)
        printf("Value does not exist in the list!\n");
}

//Onek porsos, ja ghuma xD
