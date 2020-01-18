#include<stdio.h>
void main()
{
    int a,res;
    printf("Enter value of a\n");
    scanf("%d",&a);
    res=fibonacci(a);
    printf("Fibonacci of %d is %d",a,res);
}
int fibonacci(int a)
{
    if(a==0 || a==1)
    return a;
    else
    a=(a-1)+(a-2);
    return a;
}
