#include<stdio.h>
#include<stdlib.h>
struct node
{
    int x;
    int y;
};
void main()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("Error! Memory not allocated.");
        exit(0);
    }
    p->x=10;
    p->y=20;
    printf("x=%d\ny=%d",p->x,p->y);
    free(p);
}
