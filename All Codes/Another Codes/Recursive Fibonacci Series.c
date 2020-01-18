#include<stdio.h>
void main()
{
    int a,res;
    printf("Enter value of a\n");
    scanf("%d",&a);
    fibonacci(a-1);
    //printf("Fibonacci of %d is %d",a,res);
}
int fibonacci(int a)
{   int x=0;
    if(a==0 || a==1)
    return a;
    else
    //printf("%d",x);
    x=fibonacci(a-1)+fibonacci(a-2);
    return x;
}
