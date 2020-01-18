#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *prev,*next;
}*start,*tail;
int create()
{
    int i,n;
    struct node *newnode,*temp;
    printf("Enter number of nodes.\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data of node %d\n",i+1);
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(newnode==NULL)
        {
            printf("Error.\n");
            exit(0);
        }
        if(start==NULL)
        {
            start=newnode;
            temp=newnode;
            tail=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=temp->next;
            tail=temp;
        }
    }
    return 0;
}
displayfor()
{
    struct node *temp;
    temp=start;
    printf("Forward.\n");
    if(temp==NULL)
    {
        printf("There is nothing to show.\n");
    }
    else
    {
        if(temp->next==NULL)
        {
            printf("%d->",temp->data);
        }
        else
        {
            while(temp->next!=NULL)
            {
                printf("%d-> ",temp->data);
                temp=temp->next;
            }
            printf("%d->NULL\n",temp->data);
        }
    }
}
displaybac()
{
    struct node *temp;
    temp=tail;
    printf("Backward.\n");
    if(temp==NULL)
    {
        printf("There is nothing to show.\n");
    }
    else
    {
        if(temp->prev==NULL)
        {
            printf("%d->",temp->data);
        }
        else
        {
            while(temp->prev!=NULL)
            {
                printf("%d-> ",temp->data);
                temp=temp->prev;
            }
            printf("%d->NULL\n",temp->data);
        }
    }
}
f_insert_first()
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data forwardly first inserted of node\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(newnode==NULL)
    {
        printf("Error.\n");
        exit(0);
    }
    else
    {
    if(start==NULL)
    {
        start=newnode;
        tail==newnode;
    }
    else
        {
            temp=start;
            start=newnode;
            newnode->next=temp;
            temp->prev=newnode;
        }
    }

}
b_insert_first()
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data of Backwardly first inserted node\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(newnode==NULL)
    {
        printf("Error.\n");
        exit(0);
    }
    else
    {
    if(tail==NULL)
    {
        tail=newnode;
        start=newnode;
    }
    else
        {
            temp=tail;
            while(temp->prev!=NULL)
            {
                temp=temp->prev;
            }
            temp->prev=newnode;
            newnode->next=temp;
            start=newnode;
        }
    }

}
f_insert_mid()
{
    int n,i;
    struct node *newnode,*temp,*tempo;
    printf("Enter position to insert node.\n");
    scanf("%d",&n);
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data of node.\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(newnode==NULL)
    {
        printf("Error.\n");
        exit(0);
    }
    temp=start;
    if(start==NULL)
    {
        printf("Inserted as first node.\n");
        start=newnode;
        tail=newnode;
    }
    else
    {
        for(i=1;i<n-1;i++)
        {
            temp=temp->next;
        }
        tempo=temp->next;
        temp->next=newnode;
        newnode->next=tempo;
        tempo->prev=newnode;
        newnode->prev=temp;
    }

}
count()
{
    int t=0,d;
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("There is no nodes.\n");
    }
    else
    {
        if(temp->next==NULL)
        {
            t++;
            t=d;
        }
        else
        {
            while(temp->next!=NULL)
            {
                t++;
                temp=temp->next;
            }
            d=t+1;
        }
        printf("Number of nodes after operations is %d.\n",d);
    }
}
b_insert_mid()
{
    if(start==NULL)
    {
        printf("Create a list first.\n");
    }
    else
    {
    int n,i,k=0,j;
    struct node *newnode,*temp,*tempo,*count;
    count=start;
    while(count->next!=NULL)
    {
        k++;
        count=count->next;
    }
    k=k+1;
    printf("Enter position to insert node.\n");
    scanf("%d",&n);
    j=k-n;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Error.\n");
        exit(0);
    }
    printf("Enter data of node.\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    temp=tail;
    if(tail==NULL)
    {
        printf("Inserted as first node.\n");
        tail=newnode;
        start=newnode;
    }
    else
    {
        for(i=1;i<j;i++)
        {
            temp=temp->next;
        }
        tempo=temp->prev;
        temp->prev=newnode;
        newnode->prev=tempo;
        tempo->next=newnode;
        newnode->next=temp;
    }
    }
}
f_last_insert()
{
    struct node *temp=NULL,*newnode=NULL,*current=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Error\n");
        exit(0);
    }
    printf("Enter data of last inserted node:\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        current=temp;
    }
        current->next=newnode;
        newnode->prev=current;
}
b_last_insert()
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Error.\n");
        exit(0);
    }
    printf("Enter data of last inserted node:\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=tail->prev;
    tail=newnode;
    newnode->prev=temp;
    temp->next=newnode;
}
int f_search(int a)
{
    struct node *temp;
    int t=0,p=0;
    temp=start;
    if(start==NULL)
    {
        printf("There is no linked list. Create first.\n");
    }
    else
    {
    if(temp->next==NULL)
    {
        t++;
        if(temp->data==a)
        {
            p++;
            return t;
        }
    }
    else
    {
    while(temp->next!=NULL)
    {
        t++;
        if(temp->data==a)
        {
            p++;
            return t;
        }
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        t++;
        if(temp->data==a)
        {
            p++;
            return t;
        }
    }
    }

    if(p==0)
    {
        printf("Not found.\n");
        return 0;
    }
    else
    {
        printf("Found at %d.",t);
        return t;
    }
    }


}
int b_search(int a)
{
   struct node *temp,*count;
    int t=0,p=0,k=0,j=0;
    temp=tail;
    if(tail==NULL)
    {
        printf("There is no linked list. Create first.\n");
    }
    else
    {
    if(temp->prev==NULL)
    {
        t++;
        if(temp->data==a)
        {
            p++;
            return t;
        }
    }
    else
    {
    while(temp->prev!=NULL)
    {
        t++;
        if(temp->data==a)
        {
            p++;
            return t;
        }
        temp=temp->prev;
    }
    if(temp->prev==NULL)
    {
        t++;
        if(temp->data==a)
        {
            p++;
            return t;
        }
    }
    }

    count=start;
    while(count->next!=NULL)
    {
        k++;
        count=count->next;
    }
    k=k+1;
    j=((k-t)+1);
    printf("Test %d & %d & t= %d\n",k,j,t);
    if(p==0)
    {
        printf("Not found.\n");

    }
    else
    {
        printf("Found at %d\n",j);

    }
    }


}
f_delete()
{
    int i,n,k=0;
    struct node *temp,*tempo,*temp3,*count;
    count=start;
    while(count->next!=NULL)
    {
        k++;
        count=count->next;
    }
    k=k+1;
    printf("Enter position to delete:\n");
    scanf("%d",&n);

    if(n==1)
    {
        temp=start->next;
        temp->prev=NULL;
        start=temp;
    }
    else if(n==k)
    {
        temp=tail->prev;
        temp->next=NULL;
        tail=temp;
    }
    else
    {
    temp=start;
    for(i=1;i<n-1;i++)
    {
        temp=temp->next;
    }
    tempo=temp->next;
    temp3=tempo->next;
    temp->next=temp3;
    temp3->prev=temp;
    }
}
b_delete()
{
    int i,n,k=0,j;
    struct node *temp,*tempo,*temp3,*count;
    count=start;
    while(count->next!=NULL)
    {
        k++;
        count=count->next;
    }
    k=k+1;
    printf("Enter position to delete:\n");
    scanf("%d",&n);
    j=(k-n)+1;
    if(n==1)
    {
        temp=start->next;
        temp->prev=NULL;
        start=temp;
    }
    else if(n==k)
    {
        temp=tail->prev;
        temp->next=NULL;
        tail=temp;
    }
    else
    {
    temp=tail;
    for(i=1;i<j-1;i++)
    {
        temp=temp->prev;
    }
    tempo=temp->prev;
    temp3=tempo->prev;
    temp->prev=temp3;
    temp3->next=temp;
    }
}
displaya_all()
{
    displayfor();
    displaybac();
}
opt()
{
    int pos,n,G;
    printf("\tOperations...\n");
    printf("\t\t01. Create\n");
    printf("\t\t02. Display (Forwardly)\n");
    printf("\t\t03. Display (Backwardly)\n");
    printf("\t\t04. Insert first (Forwardly)\n");
    printf("\t\t05. Insert first (Backwardly)\n");
    printf("\t\t06. Insert Mid (Forwardly)\n");
    printf("\t\t07. Insert Mid (Backwardly)\n");
    printf("\t\t08. Search (Forwardly)\n");
    printf("\t\t09. Search (Backwardly)\n");
    printf("\t\t10. Display (Both Forwardly & Backwardly)\n");
    printf("\t\t11. Last Insert (Forwardly)\n");
    printf("\t\t12. Last Insert (Backwardly)\n");
    printf("\t\t13. Count\n");
    printf("\t\t14. Delete (Forwardly)\n");
    printf("\t\t15. Delete (Backwardly)\n");
    printf("\t\t00. To terminate enter 0(zero).\n");
    printf("Enter your choice.\n");
    scanf("%d",&G);
    switch(G)
    {
        case 1:
            create();
            printf("DONE!\n");
            opt();
            break;
        case 2:
            displayfor();
            printf("DONE!\n");
            opt();
            break;
        case 3:
            displaybac();
            printf("DONE!\n");
            opt();
            break;
        case 4:
           f_insert_first();
           printf("DONE!\n");
           opt();
           break;
        case 5:
            b_insert_first();
            printf("DONE!\n");
            opt();
            break;
        case 6:
            f_insert_mid();
            printf("DONE!\n");
            opt();
            break;
        case 7:
            b_insert_mid();
            printf("DONE!\n");
            opt();
            break;
        case 8:
            printf("Enter key to search:\n");
            scanf("%d",&n);
            pos=f_search(n);
            printf("Position is %d\n",pos);
            printf("DONE!\n");
            opt();
            break;
        case 9:
            printf("Enter key to search:\n");
            scanf("%d",&n);
            pos=f_search(n);
            printf("Position is %d\n",pos);
            printf("DONE!\n");
            opt();
            break;
        case 10:
            displaya_all();
            printf("DONE!\n");
            opt();
            break;
        case 11:
            f_last_insert();
            printf("DONE!\n");
            opt();
            break;
        case 12:
            b_last_insert();
            printf("DONE!\n");
            opt();
            break;
        case 13:
            count();
            printf("DONE!\n");
            opt();
            break;
        case 14:
            f_delete();
            printf("DONE!\n");
            opt();
            break;
        case 15:
            b_delete();
            printf("DONE!\n");
            opt();
            break;
        case 0:
            exit(0);
    }
}
int main()
{
    printf("\t\t\t\t\t............Doubly Linked List.............\n");
    printf("\t\t\t\t\t\t    By A. N. M. JuBaer\n");
    printf("\t\t\t\t\t\t        162-15-7850\n");
    printf("\t\t\t\t\t\t         Section:E\n");
    printf("\t\t\t\t........................................................\n");
    opt();
}
