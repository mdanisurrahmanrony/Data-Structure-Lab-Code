#include<stdio.h>
void main()
{
    int b,p;
    printf("Enter base and power\n");
    scanf("%d%d",&b,&p);
    printf("Power is %d",power(b,p));

}
int power(int x,int y)
{
    if(y==0)
    return 1;
    else
    return x*power(x,y-1);
}
