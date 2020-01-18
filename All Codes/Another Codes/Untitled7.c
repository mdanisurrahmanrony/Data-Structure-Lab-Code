#include<stdio.h>
#include<stdlib.h>
struct node{
int x,y
}*ptr;
void main()
{   int n,m;
printf("Enter values of x,y\n");
  scanf("%d%d",&n,&m);
    ptr=(struct node*)malloc(n*sizeof(struct node));
    ptr->x=n;
    ptr->y=m;
    printf("%d\n%d",ptr->x,ptr->y);
}
