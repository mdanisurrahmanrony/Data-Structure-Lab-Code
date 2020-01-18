#include<stdio.h>
int power(int x,int y)
{
    if(y==0)
        return 1;
    else
        return x=x*power(x,y-1);
}
void main()
{
    int b,p;
    printf("Enter base & power:\n");
    scanf("%d%d",&b,&p);
    printf("\n%d to the power %d is %d",b,p,power(b,p));
}
