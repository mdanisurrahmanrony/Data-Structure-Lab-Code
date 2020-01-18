#include<stdio.h>
void main()
{
    int n;
    printf("Enter number for factorial\n");
    scanf("%d",&n);
    printf("Factorial for %d is %d",n,factorial(n));
}
int factorial(int a)
{
    if(a==0)
    return 1;
    else
        return a=a*factorial(a-1);
}
