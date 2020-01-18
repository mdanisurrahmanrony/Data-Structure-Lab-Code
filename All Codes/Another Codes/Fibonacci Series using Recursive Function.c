#include<stdio.h>
int fib(int x)
{
  if(x==0 || x==1)
    return x;
  else
    return x=fib(x-1)+fib(x-2);
}
void main()
{
    int i,n;
    printf("Enter number for fibonacci series:\n");
    scanf("%d",&n);
    printf("\nFibonacci series is:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",fib(i));
    }
}
