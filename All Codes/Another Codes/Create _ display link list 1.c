#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*start=NULL;
void create()
{
  struct node *new_node,*current;
  int i,n;
  printf("Enter number of nodes:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  new_node=(struct node *)malloc(sizeof(struct node));
  printf("Enter the data of node %d:\n",i);
  scanf("%d",&new_node->data);
  new_node->next=NULL;

  if(start==NULL)
  {
  start=new_node;
  current=new_node;
  }
  else
  {
  current->next=new_node;
  current=new_node;
  }
  }
}
void display()
{
 struct node *new_node;
 printf("The Linked List :\n");
 new_node=start;
 while(new_node!=NULL)
   {
   printf("\t-->%d",new_node->data);
   new_node=new_node->next;
   }
}
void main()
{
 create();
 display();
}
