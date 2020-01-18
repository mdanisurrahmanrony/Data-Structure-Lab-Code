#include<stdio.h>
struct stack
{
    int stk[100];
    int top;
}s;
int push(int);
int pop();
void display();
void main()
{
    int i=1,max;
    printf("Enter maximum size of stack\n");
    scanf("%d",&max);
    s.top=0;
    printf("\n--->Stack<---\n");
    while(i!=4)
    {
      printf("\n1. Push\n");
      printf("\n2. Pop\n");
      printf("\n3. Display\n");
      printf("\n4. Exit\n");
      printf("\nEnter choice\n");
      scanf("%d",&i);
      switch(i)
      {
      case 1:
        push(max);
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        printf("--->Exit<---");
        break;
      default:
        printf("\nInvalid Input! Please enter right choice\n");
        break;
      }
    }
}
int push(int m)
{
    int data;
    printf("\nEnter data for stack:\n");
    scanf("%d",&data);
    if(s.top==m)
    {
        printf("\nOverflow has been occured!!!\n");
        return;
    }
    else
    {
      s.top=s.top+1;
      s.stk[s.top]=data;
    }
    return;
}
int pop()
{
    int data;
    if(s.top==0)
    {
        printf("\nUnderflow has been occurred!!!\n");
        return(s.top);
    }
    else
    {
        data=s.stk[s.top];
        printf("\nDeleted item is:%d\n",s.stk[s.top]);
        s.top=s.top-1;
    }
    return (data);
}
void display()
{
    int a;
    if(s.top==0)
    {
        printf("\nUnderflow has been occurred!!!\n");
        return;
    }
    else
    {
        printf("\nStack is:\n");
        for(a=s.top;a>0;a--)
        {
            printf("\n%d",s.stk[a]);
        }
        printf("\n");
    }
}

