#include<stdio.h>
#include<stdlib.h>
struct node
{
    int x;
    int y;
};
void main()
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->x=10;
    ptr->y=20;
    printf("%d\n%d",ptr->x,ptr->y);
}
